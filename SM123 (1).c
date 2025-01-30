
/*my name is Doa Nasrallah*/

#include <stdio.h>
#define price 100
#define tax 0.2
#define processing_fee 50
#define available_quantity 50

int main(void)
{
    int quantity;
    float net_total_price, total_price;
    double new_tax;

    printf("Hello, and welcome to 'what a show', please enter the number of tickets you want to purchase: \n");
    scanf("%d", &quantity);

    /*cheeking if the quantity entered is available and in case its 0*/

    if (quantity == 0)
    {

        printf("thank you for visiting, hope to see you again!\n ");

    }

    else if (quantity > available_quantity || quantity < 0) 
    {

        printf("Sorry, the amount of tickets you want to purchase is not avialable!\n");

    }

    else if (quantity < available_quantity)
    {

        net_total_price = price * quantity;

        new_tax = net_total_price * tax;

        total_price = net_total_price + new_tax + processing_fee;

        available_quantity == available_quantity - quantity;

        printf("the total price of your purchase is :%.2f which includes:\n -the net total price: %.2f\n -The tax: %.2f\n -the processing fee: %d \n", total_price, net_total_price, new_tax, processing_fee);
        printf("Thank you for your purchase, hope to see you again!");
        
    }
    

    return 0;
}