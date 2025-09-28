#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    int GetSec, Hour, Min, Sec;
    printf("input the second: ");
    scanf("%d", &GetSec);
    
    Hour = GetSec / 3600;
    Min = (GetSec % 3600) / 60;
    Sec = (GetSec % 3600) % 60;
    
    printf("The time for %d second is %d: %d: %d\n", GetSec, Hour, Min, Sec); 
    
    system("PAUSE");
    return 0;
    
      
}

