#include <stdio.h>
#include <locale.h>

int main(void)
{
    int firstnumber;
    int secondnumber;
    char rslt[7] = "result";
    printf("write you first number:");
    scanf("%d", &firstnumber);
    printf("write you second number:");
    scanf("%d", &secondnumber);
    int result = firstnumber + secondnumber;
    printf("%d",result);
    getchar;
    return 0;


}

