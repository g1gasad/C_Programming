#include <stdio.h>

int main(){
    FILE *ptr1, *ptr2;
    int n1, n2, n3;
    ptr1 = fopen("myfile.txt", "r");
    if(ptr1!= NULL){
        fscanf(ptr1, "%d %d %d", &n1, &n2, &n3);

        fclose(ptr1);
    }
    ptr2 = fopen("table.txt", "w");
    if (ptr2 != NULL){
        for (int i=1; i<11; i++){
            fprintf(ptr2, "%d", n1);
            fputc('*', ptr2);
            fprintf(ptr2, "%d", i);
            fputc('=', ptr2);
            fprintf(ptr2, "%d", n1*i);
            for (int j=0; j<4; j++){
                fputc(' ', ptr2);
            }
            
            fprintf(ptr2, "%d", n2);
            fputc('*', ptr2);
            fprintf(ptr2, "%d", i);
            fputc('=', ptr2);
            fprintf(ptr2, "%d", n2*i);
            for (int j=0; j<4; j++){
                fputc(' ', ptr2);
            }

            fprintf(ptr2, "%d", n3);
            fputc('*', ptr2);
            fprintf(ptr2, "%d", i);
            fputc('=', ptr2);
            fprintf(ptr2, "%d", n3*i);
            if (i!=10){
                fprintf(ptr2, "%c", '\n');
            }
        }


        fclose(ptr2);
    }


    return 0;
}