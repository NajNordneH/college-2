#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TOO_BIG 1000000000
#define NO_OF_LINES 500
#define NO_OF_CHARS 100

const int TYPES_OF_CHARS[7] = {'A','G','T','C',EOF,'\n',1};

int in_array(int c){
    for(int i = 0; i < 6; i++){
        if(i < 4 && c == TYPES_OF_CHARS[i]){
            return i;
        }
        else if(i >= 4 && c == TYPES_OF_CHARS[i]){
            return TOO_BIG;
        }
    }
    return -1;
}

int check_file(FILE* file, int chars[]){
    int line_counter = 0;
    int char_counter = 0;
    int c;
    while((c = fgetc(file)) != EOF){
        int current_char = in_array(c);
        char_counter++;
        if(current_char >= 0){
            if (current_char < TOO_BIG){
                chars[current_char]++;
            }
            if(c == '\n'){
                line_counter++;
                if (char_counter != NO_OF_CHARS+1 ){
                    return 1;
                }
                char_counter = 0;
            }
            if(char_counter == NO_OF_CHARS+1 && (c != '\n' || c != EOF)){
                return 1;
            }
        }
        else {
            return 1;
        }
    }
    if (line_counter != NO_OF_LINES){
        return 1;
    }
    return 0;
}

void print_chars(int chars[]){
    for(int i = 0; i < 4; i++){
        printf("There are %d %c's in the file\n",chars[i],TYPES_OF_CHARS[i]);
    }
}

int main(int argc, char* argv[]){
    FILE* inputfile;
    inputfile = fopen(argv[1],"r");
    int chars[4] = {0,0,0,0};
    if(!inputfile){
        printf("Could not open %s",argv[1]);
        return EXIT_FAILURE;
    }
    if(check_file(inputfile,chars) == 1){
        printf("%s is not in the genome format\n",argv[1]);
        fclose(inputfile);
        return EXIT_FAILURE;
    }
    printf("%s is in the correct genome format\n",argv[1]);
    print_chars(chars);
    fclose(inputfile);
}
