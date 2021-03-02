#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
#include <stdio.h>

int directory(char *);


//Read user input from the prompt display
char **readInput(char *input) {
    char **command = (char **)malloc(8 * sizeof(char *));
    if (command == NULL) {
        perror("Failed to allocate memory");
        exit(1);
    }

    const char *space = " ";
    char *cmd;
    int i = 0;

    cmd = strtok(input, space);
    while (cmd != NULL) {
        command[i] = cmd;
        i++;

        cmd = strtok(NULL, space);
    }

    command[i] = NULL;
    
    return command;
}

//Displays the prompt
void displayPrompt(){
	static int count = 1; //count to make sure the prompt is cleared only the first time

	if(count){
	const char* cls = "\e[1;1H\e[2J";
	write(STDOUT_FILENO, cls, 12);
	count = 0;
	}

}


//Return directory path input by the user with cd command
int directory(char *path) {
    return chdir(path);
}

int main() {
    int p[2];
    char *input; //user input
    char **command; //index the input
    int lock; 
    pid_t child_pid;


    int historyCount = 0; 
    char *commandHistory;
    char *buffer[15];
    
    for (int i=0; i < 15; i++)
    {
        buffer[i] = NULL;
    } 

    pipe(p);

    while (1){
	displayPrompt();
        input = readline("# ");
        command = readInput(input);

        if (!command[0]) { //if no command entered, re-display prompt
            free(input);
            free(command);
            continue;
        }

	   if (strcmp(command[0], "cd") == 0) //handle the cd command
       {
            if (directory(command[1]) < 0) 
            {
                perror(command[1]);
            }

            continue;
        }


         if(strcmp(command[0], "history")==0) //handle the history command
        {
            printf("Previous commands: \n");
            for(int n = 0; n<15 ; n++) 
            {
            if(buffer[n] != NULL)
            printf("%s\n", buffer[n]);
            }
         }   

        if(strcmp(command[0],"") != 0)
        {
            if((commandHistory = strdup(command[0])) != NULL)
            {
                if (buffer[historyCount]) 
                free(buffer[historyCount]);

                buffer[historyCount] = commandHistory;

                historyCount++;
            }   

            else
            {
            	fprintf(stderr, "Command history limit of 15 reached. Resetting... \n");
        	}

            if(historyCount>14)
            { //Reset the command history when it reaches 15 commands
                historyCount=0;
             }
        }



        child_pid = fork();
        if (child_pid < 0) 
        {
            perror("Failed to fork!");
            exit(1);
        }

        if (child_pid == 0) 
        {
            if (execvp(command[0], command) < 0) 
            {
                perror(command[0]);
                exit(1);
            }
        } 

        else 
        {
            waitpid(child_pid, &lock, WUNTRACED);
        }

    	if(strcmp(*command, "exit") == 0 || strcmp(*command, "quit") == 0) //handle user exit
        {
    		break;
    	}

        free(input);
        free(command);
    }

    return 0;
}


