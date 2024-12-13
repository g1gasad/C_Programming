#include <stdio.h>

int main(){
    int nums[10] = {3, 6, -11, 45, 21, 8, 0, -12, 4, 69};
    int* ptr = nums;
    printf("the add is %u\n", ptr);
    printf("the val is %d\n", *ptr);
    ptr = ptr+2;
    printf("the add is %u\n", ptr);
    printf("the val is %d\n", *ptr);

    return 0;
}