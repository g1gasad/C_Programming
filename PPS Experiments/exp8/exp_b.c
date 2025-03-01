#include <stdio.h>

int main(){
    FILE* rfptr;
    FILE* wfptr;
    rfptr = fopen("E:/Projects/Learning/C_Programming/PPS Experiments/exp8/myfile.txt", "r");
    wfptr = fopen("E:/Projects/Learning/C_Programming/PPS Experiments/exp8/anotherfile.txt", "a");
    if (rfptr!=NULL && wfptr!=NULL){
        fprintf(wfptr, "%c", '\n');
        char ch;
        while(1){
            ch = fgetc(rfptr);
            if (ch==EOF){
                break;
            }
            printf("%c", ch);
            fprintf(wfptr, "%c", ch);
        }
        
        fclose(rfptr);
        fclose(wfptr);
    }
    else{
        printf("one of the file missing");
    }
    
    
    return 0;
}