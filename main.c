#include <stdio.h>

int main() {
    int i,j;
    while(i <= 9){
        j = 1;
        while(j <= i){
            printf("%d * %d = %d",j,i,j*i);
            if(j * i >10){
                printf("  ");
            }
            else{
                printf("   ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    printf("%llu\n",sizeof(char));//1
    printf("%llu\n",sizeof(short));//2
    printf("%llu\n",sizeof(int));//4
    printf("%llu\n",sizeof(long));//4
    printf("%llu\n",sizeof(long long));//8
    printf("%llu\n",sizeof(double));//8
    printf("%llu\n",sizeof(float));//4
    printf("%llu\n",sizeof(long double));//16
       char a;
       a = 127;
    printf("-127 + 1 = %d",a+1);// 127+1=-128
    printf("i am fine ");


    return 0;
}

