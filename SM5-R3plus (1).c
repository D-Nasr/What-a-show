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


int main()
{

    unsigned short quantity, index, feedback,
                   available_quantity1 = 30,
                   available_quantity2 = 20, 
                   available_quantity3 = 10;

    float net_total_price, initial_total_price,  tax, 
              total_price, discount, PRICE, tickets;

    printf("hello, and welcome to 'what a show', where you find your favorite things to watch. Here's the current available shows you can choose from :\n");
    printf("1. A dance performance (the Nutcracker, with music by Pyotr Ilyich Tchaikovsky)\n");
    printf("2. A theatre performance (Hamlet, the play by William Shakespeare)\n");
    printf("3. A music concert (Kate Bush)\n");

    printf("Choosing from the list above, keep in mind that for: \n show 1: there's %hu available tickets\n show 2: there's %hu tickets available\n show 3: there's %hu tickets available\n Please select which available show you want either type in 1, 2 or 3: \n", available_quantity1, available_quantity2, available_quantity3);
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
            tickets = tickets + quantity;

        }
        if (quantity > 0 && quantity <= available_quantity1)
        {

            initial_total_price = price_1 * quantity;
            PRICE = PRICE + initial_total_price;
            tickets = tickets + quantity;
            available_quantity1 = available_quantity1 - quantity;

        }
        else if (quantity > available_quantity1)
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
            tickets = tickets + quantity;

        }
        if (quantity > 0 && quantity <= available_quantity2)
        {

            initial_total_price = price_2 * quantity;
            PRICE = PRICE + initial_total_price;
            tickets = tickets + quantity;
            available_quantity2 = available_quantity2 - quantity;

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
            tickets = tickets + quantity;

        }
        if (quantity > 0 && quantity <= available_quantity3)
        {

            initial_total_price = price_3 * quantity;
            PRICE = PRICE + initial_total_price;
            tickets = tickets + quantity;
            available_quantity3 = available_quantity3 - quantity;

        }
        else if (quantity > available_quantity3)
        {

            printf("sorry the wanted quantity is not available!!\n");

        }
    }
    else
    {

        printf("Sorry, there is no such show. Please select from the available show (1,2 or 3)\n");
        tickets = tickets + 0;

    }

    /*ask the customer if they want to repurchase*/

    printf("Do you want to repurchase tickets from a show again? (if yes type 1, if no type 2): \n");
    scanf("%hu", &feedback);

    while (feedback == 1)
    {

        printf("Choosing from the list above, keep in mind that for: \n show 1: there's %hu available tickets\n show 2: there's %hu tickets available\n show 3: there's %hu tickets available\n Please select which available show you want either type in 1, 2 or 3: \n", available_quantity1, available_quantity2, available_quantity3);
        scanf("%hu", &index);

        if (index == 1)
        {

            printf("Please, enter the number of tickets you want for show 1: \n");
            scanf("%hu", &quantity);

            if (quantity == 0)
            {

                printf("thank you for visiting, hope to see you again!\n ");
                tickets = tickets + quantity;

            }
            if (quantity > 0 && quantity <= available_quantity1)
            {

                initial_total_price = price_1 * quantity;
                PRICE = PRICE + initial_total_price;
                tickets = tickets + quantity;
                available_quantity1 = available_quantity1 - quantity;

            }
            else if (quantity > available_quantity1)
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
                tickets = tickets + quantity;

            }
            if (quantity > 0 && quantity <= available_quantity2)
            {

                initial_total_price = price_2 * quantity;
                PRICE = PRICE + initial_total_price;
                tickets = tickets + quantity;
                available_quantity2 = available_quantity2 - quantity;

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
                tickets = tickets + quantity;

            }
            if (quantity > 0 && quantity <= available_quantity3)
            {

                initial_total_price = price_3 * quantity;
                PRICE = PRICE + initial_total_price;
                tickets = tickets + quantity;
                available_quantity3 = available_quantity3 - quantity;

            }
            else if (quantity > available_quantity3)
            {

                printf("sorry the wanted quantity is not available!!\n");

            }
        }
        else
        {

            printf("Sorry, there is no such show. Please select from the available show (1,2 or 3)\n");
            tickets = tickets + 0;

        }

        /*updating the feedback variable to in case they want to repurchase or not*/

        printf("Do you want to repurchase tickets from a show again? (if yes type 1, if no type 2): \n");
        scanf("%hu", &feedback);
    }
    
    /*calculating the discount according to the tickets bought*/

    if (tickets < 0 || tickets == 0)
    {

        printf("thank you for visiting, hope to see you again!\n ");

    }
    else if (tickets > 0 && tickets < 5)
    {

        net_total_price = PRICE;
        tax = net_total_price * tax_rate;6
        total_price = net_total_price + tax + processing_fee;

        printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
        printf("Tax: %.2f dhs.\n", tax);
        printf("Total Price: %.2f dhs.\n", total_price);
        printf("Thank you for your purchase, hope to see you again!");

    }
    else if (tickets >= 5 && tickets <= 9)
    {

        discount = PRICE * discount_1;
        net_total_price = PRICE - discount;
        tax = net_total_price * tax_rate;
        total_price = net_total_price + tax + processing_fee;

        printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
        printf("Discount : %.2f dhs \n", discount);
        printf("Tax: %.2f dhs.\n", tax);
        printf("Total Price: %.2f dhs.\n", total_price);
        printf("Thank you for your purchase, hope to see you again!");

    }
    else if (tickets >= 10 && tickets <= 14)
    {

        discount = PRICE * discount_2;
        net_total_price = PRICE - discount;
        tax = net_total_price * tax_rate;
        total_price = net_total_price + tax + processing_fee;

        printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
        printf("Discount : %.2f dhs \n", discount);
        printf("Tax: %.2f dhs.\n", tax);
        printf("Total Price: %.2f dhs.\n", total_price);
        printf("Thank you for your purchase, hope to see you again!");

    }
    else if (tickets >= 15)
    {

        discount = PRICE * discount_3;
        net_total_price = PRICE - discount;
        tax = net_total_price * tax_rate;
        total_price = net_total_price + tax + processing_fee;

        printf("\nNet Total Price: %.2f dhs.\n", net_total_price);
        printf("Discount : %.2f dhs \n", discount);
        printf("Tax: %.2f dhs.\n", tax);
        printf("Total Price: %.2f dhs.\n", total_price);
        printf("Thank you for your purchase, hope to see you again!");

    }

    return 0;
}