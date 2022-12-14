#include <stdio.h>
int main()
{
    float rate,prize,ammount;
    printf("Enter the rate \n");
    scanf("%f",&rate);
    printf("Enter the Prize\n");
    scanf("%f",&prize);
    ammount=rate*prize;
    if(ammount>500)
        ammount=ammount*0.9;//10% discount
    printf("%.2f Total ammount \n",ammount);
}

/*
Enter the rate 
90
Enter the Prize
6
486.00 Total ammount 
*/
