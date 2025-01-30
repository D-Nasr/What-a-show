/*my name is Doa Nasrallah*/

#include <stdio.h>
#define price_1 125.50
#define price_2 175.50
#define price_3 225.50
#define tax_rate 0.2
#define processing_fee 50
#define discount_1 0.05
#define discount_2 0.10
#define discount_3 0.15
#define available_quantity1 30
#define available_quantity2 20
#define available_quantity3 10

int main()
{

    unsigned short quantity, index;
    float net_total_price, initial_total_price, tax, total_price, discount;

    printf("hello, and welcome to 'what a show', where you find your favorite things to watch. Here's the current available shows you can choose from :\n");
    printf("1. A dance performance (the Nutcracker, with music by Pyotr Ilyich Tchaikovsky)\n");
    printf("2. A theatre performance (Hamlet, the play by William Shakespeare)\n");
    printf("3. A music concert (Kate Bush)\n");

    printf("Choosing from the list above, please select which available show you want either type in 1, 2 or 3: \n");
    scanf("%hu", &index);

    if (index == 1)
    {
        printf("Please, enter the number of tickets you want for show 1: \n");
        scanf("%hu", &quantity);

        /*cheeking if the quantity entered is available and in case its 0
        and calculating in each case the price*/

        if (quantity == 0)
        {

            printf("thank you for visiting, hope to see you again!\n ");

        }
        else if (quantity > 0 && quantity <= available_quantity1)
        {

            /*calculating the discount according to the quantity*/
            if (quantity > 0 && quantity < 5)
            {

                net_total_price = price_1 * quantity;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }

            else if (5 <= quantity <= 9)
            {

                initial_total_price = price_1 * quantity;
                discount = initial_total_price * discount_1;
                net_total_price = initial_total_price - discount;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Discount : %.2f dhs \n", discount);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }
            else if (10 <= quantity <= 14)
            {

                initial_total_price = price_1 * quantity;
                discount = net_total_price * discount_2;
                net_total_price = initial_total_price - discount;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Discount : %.2f dhs \n", discount);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }
            else if (quantity >= 15)
            {

                initial_total_price = price_1 * quantity;
                discount = net_total_price * discount_3;
                net_total_price = initial_total_price - discount;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Discount : %.2f dhs \n", discount);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }
        }
        else
        {

            printf("sorry the wanted quantity is not available!!\n");

        }
    }

    else if (index == 2)
    {

        printf("Please, enter the number of tickets you want for show 2: \n");
        scanf("%hu", &quantity);

        if (quantity == 0)
        {

            printf("thank you for visiting, hope to see you again!\n ");

        }
        if (quantity > 0 && quantity <= available_quantity2)
        {
            if (quantity > 0 && quantity < 5)
            {

                net_total_price = price_1 * quantity;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }
            else if (5 <= quantity <= 9)
            {

                initial_total_price = price_2 * quantity;
                discount = initial_total_price * discount_1;
                net_total_price = initial_total_price - discount;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Discount : %.2f dhs \n", discount);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }
            else if (10 <= quantity <= 14)
            {

                initial_total_price = price_2 * quantity;
                discount = net_total_price * discount_2;
                net_total_price = initial_total_price - discount;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Discount : %.2f dhs \n", discount);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }
            else if (quantity >= 15)
            {

                initial_total_price = price_2 * quantity;
                discount = net_total_price * discount_3;
                net_total_price = initial_total_price - discount;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Discount : %.2f dhs \n", discount);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }
            else if (quantity > 0 && quantity < 5)
            {

                net_total_price = price_1 * quantity;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }
        }

        else if (quantity > available_quantity2)
        {

            printf("sorry the wanted quantity is not available!!\n");

        }
    }

    else if (index == 3)
    {

        printf("Please, enter the number of tickets you want for show 3: \n");
        scanf("%hu", &quantity);

        if (quantity == 0)
        {

            printf("thank you for visiting, hope to see you again!\n ");

        }
        if (quantity > 0 && quantity <= available_quantity3)
        {
            if (quantity > 0 && quantity < 5)
            {

                net_total_price = price_1 * quantity;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }

            else if (5 <= quantity <= 9)
            {

                initial_total_price = price_3 * quantity;
                discount = initial_total_price * discount_1;
                net_total_price = initial_total_price - discount;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Discount : %.2f dhs \n", discount);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }
            else if (10 <= quantity <= 14)
            {

                initial_total_price = price_3 * quantity;
                discount = net_total_price * discount_2;
                net_total_price = initial_total_price - discount;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Discount : %.2f dhs \n", discount);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }
            else if (quantity >= 15)
            {

                initial_total_price = price_3 * quantity;
                discount = net_total_price * discount_3;
                net_total_price = initial_total_price - discount;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Discount : %.2f dhs \n", discount);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }
            else if (quantity > 0 && quantity < 5)
            {

                net_total_price = price_1 * quantity;
                tax = net_total_price * tax_rate;
                total_price = net_total_price + tax + processing_fee;

                printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
                printf("Tax: %.2f dhs.\n", tax);
                printf("Total Price: %.2f dhs.\n", total_price);
                printf("Thank you for your purchase, hope to see you again!");

            }

            else if (quantity > available_quantity3)
            {

                printf("sorry the wanted quantity is not available!!\n");

            }
        }

        else
        {

            printf("sorry, there is no such show. Please select from the available show (1,2 or 3)");
            
        }

        return 0;
    }
}