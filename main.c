#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    int year;
    printf("input the year: ");
    scanf("%d", &year);
    
    int Isleap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    
    
    
    printf("Is the year %d the leap year?:", year);
    printf("%d", Isleap);
    system("PAUSE");
}
