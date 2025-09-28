#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    int Sec, Min;
    printf("input the second: ");
    scanf("%d", &Sec);
    
    Min=Sec/60;
    Sec=Sec%60;
    
    printf("The time is %d: %d\n", Min, Sec);
    system("PAUSE");
}
