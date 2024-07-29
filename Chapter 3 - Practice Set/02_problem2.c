#include <stdio.h>

int main(){
    int a, b, c;
    float sub_total = 100.0;
    float max_total = 300.0;
    float total_min_percent = 0.4;
    float sub_min_percent = 0.33;

    printf("Enter marks for Chem: ");
    scanf("%d", &a);
    printf("Enter marks for Phy: ");
    scanf("%d", &b);
    printf("Enter marks for Mat: ");
    scanf("%d", &c);

    float sub_a_per = a / sub_total;
    float sub_b_per = b / sub_total;
    float sub_c_per = c / sub_total;
    float received_total = a + b + c;
    float percent = received_total / max_total;

    if (percent<0.4 || sub_a_per<0.33 || sub_b_per<0.33 || sub_c_per<0.33){
        printf("you fail");
    }
    else {
        printf("u pass");
    }
    return 0;
}