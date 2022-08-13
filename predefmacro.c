#include <stdio.h> 
int main()
{
    printf("date is: %s\n", __DATE__);
    printf("__TIME__ is: %s\n", __TIME__); 
    printf("Line number is: %d\n", __LINE__);
    printf("__FILE__ is: %s\n", __FILE__);
    return 0;
    
}
