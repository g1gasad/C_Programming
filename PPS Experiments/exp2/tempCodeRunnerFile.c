#include <stdio.h>

void triangleType(int a, int b, int c){
    if (a!=b && a!=c && b!=c){
        printf("Scalene Triangle\n");
    }
    else if (a==b && b==c){
        printf("Equilateral Triangle\n");
    }
    else if ((a==b && b!=c) || (a==c && a!=b) || (b==c && b!=a)){
        printf("Isosceles Triangle\n");
    }
    else{
        printf("Not a Triangle\n");
    }
}

int main(){
    int a, b, c;
    int testVec[6][3] = {{3, 4, 5},
                         {3, 4, 4}, 
                         {4, 4, 3},
                         {6, 6, 6},
                         {1, 2, 3},
                         {4, 3, 4}};
    for (int i=0; i<6; i++){
        a = testVec[i][0];
        b = testVec[i][1];
        c = testVec[i][2];
        triangleType(a, b, c);
    }

    return 0;
}