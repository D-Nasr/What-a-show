// Doa Nasrallah

#include <stdio.h>

void drawButterfly(char ch, int size, char frameChar, int drawFrame)
{
    int i, j;

    if (size % 2 == 0)
    {

        if (drawFrame == 1)
        {
            // Draw top frame
            for (i = 0; i < size + 4; i++)
                printf("%c", frameChar);
            printf("\n");
        }

        for (i = 0; i < size / 2; i++)
        {
            if (drawFrame == 1)
            {
                printf("%c ", frameChar); // Draw left frame
            }
            for (j = 0; j < i; j++)
            {
                printf("%c", ch);
            }
            printf("%c", ch);
            for (j = 0; j < size - 2 * (i + 1); j++)
            {
                printf(" ");
            }
            printf("%c", ch);

            for (j = 0; j < i; j++)
            {
                printf("%c", ch);
            }
            if (drawFrame == 1)
            {
                printf(" %c", frameChar); // Draw right frame
            }
            printf("\n");
        }

        // Draw the lower part of the butterfly
        for (i = size / 2 - 1; i >= 0; i--)
        {
            if (drawFrame == 1)
            {
                printf("%c ", frameChar); // Draw left frame
            }
            for (j = 0; j < i; j++)
            {
                printf("%c", ch);
            }
            printf("%c", ch);
            for (j = 0; j < size - 2 * (i + 1); j++)
            {
                printf(" ");
            }
            printf("%c", ch);

            for (j = 0; j < i; j++)
            {
                printf("%c", ch);
            }
            if (drawFrame == 1)
            {
                printf(" %c", frameChar); // Draw right frame
            }
            printf("\n");
        }

        if (drawFrame == 1)
        {
            // Draw bottom frame
            for (i = 0; i < size + 4; i++)
                printf("%c", frameChar);
            printf("\n");
        }
    }
    else
    {
        if (drawFrame == 1)
        {
            // Draw top frame
            for (i = 0; i < size + 5; i++)
                printf("%c", frameChar);
            printf("\n");
        }

        for (i = 0; i < size / 2; i++)
        {
            if (drawFrame == 1)
            {
                printf("%c ", frameChar); // Draw left frame
            }
            for (j = 0; j < i; j++)
            {
                printf("%c", ch);
            }
            printf("%c ", ch);
            for (j = 0; j < size - 2 * (i + 1); j++)
            {
                printf(" ");
            }
            printf("%c", ch);

            for (j = 0; j < i; j++)
            {
                printf("%c", ch);
            }
            if (drawFrame == 1)
            {
                printf(" %c", frameChar); // Draw right frame
            }
            printf("\n");
        }

        // Draw the lower part of the butterfly
        for (i = size / 2; i >= 0; i--)
        {
            if (drawFrame == 1)
            {
                printf("%c ", frameChar); // Draw left frame
            }
            for (j = 0; j < i; j++)
            {
                printf("%c", ch);
            }
            printf("%c", ch);
            for (j = 0; j <= size - 2 * (i + 1); j++)
            {
                printf(" ");
            }
            printf("%c", ch);

            for (j = 0; j < i; j++)
            {
                printf("%c", ch);
            }
            if (drawFrame == 1)
            {
                printf(" %c", frameChar); // Draw right frame
            }
            printf("\n");
        }

        if (drawFrame == 1)
        {
            // Draw bottom frame
            for (i = 0; i < size + 5; i++)
                printf("%c", frameChar);
            printf("\n");
        }
    }
}

void drawHourglass(int size, char frameChar, char figureChar, int drawFrame, int spaceBetween)
{
    int i, j, k;

    if (drawFrame)
    {
        // Top frame
        for (i = 0; i < size + 4; i++)
            printf("%c", frameChar);
        printf("\n");
    }

    // Top half of the hourglass
    for (i = size; i >= 1; i -= 2)
    {
        if (drawFrame)
            printf("%c%c", frameChar, spaceBetween ? ' ' : frameChar);
        for (j = 1; j <= (size - i) / 2; j++)
            printf("%c", spaceBetween ? ' ' : frameChar);
        for (j = 1; j <= i; j++)
            printf("%c", figureChar);
        for (j = 1; j <= (size - i) / 2; j++)
            printf("%c", spaceBetween ? ' ' : frameChar);
        if (drawFrame)
            printf("%c%c", spaceBetween ? ' ' : frameChar, frameChar);
        printf("\n");
    }

    // Bottom half of the hourglass
    if (size % 2 != 0)
    {
        for (i = 3; i <= size; i += 2)
        {
            if (drawFrame)
                printf("%c%c", frameChar, spaceBetween ? ' ' : frameChar);
            for (j = 1; j <= (size - i) / 2; j++)
                printf("%c", spaceBetween ? ' ' : frameChar);
            for (j = 1; j <= i; j++)
                printf("%c", figureChar);
            for (j = 1; j <= (size - i) / 2; j++)
                printf("%c", spaceBetween ? ' ' : frameChar);
            if (drawFrame)
                printf("%c%c", spaceBetween ? ' ' : frameChar, frameChar);
            printf("\n");
        }
    }
    else
    {
        for (i = 4; i <= size; i += 2)
        {
            if (drawFrame)
                printf("%c%c", frameChar, spaceBetween ? ' ' : frameChar);
            for (j = 1; j <= (size - i) / 2; j++)
                printf("%c", spaceBetween ? ' ' : frameChar);
            for (j = 1; j <= i; j++)
                printf("%c", figureChar);
            for (j = 1; j <= (size - i) / 2; j++)
                printf("%c", spaceBetween ? ' ' : frameChar);
            if (drawFrame)
                printf("%c%c", spaceBetween ? ' ' : frameChar, frameChar);
            printf("\n");
        }
    }

    if (drawFrame)
    {
        // Bottom frame
        for (i = 0; i < size + 4; i++)
            printf("%c", frameChar);
        printf("\n");
    }
}

int main()
{
    char ch;
    char frameChar, figureChar;
    int size, i, j, feedback, spaceBetween, drawFrame;

    printf("do you want to draw an hourglass or a butterfly (enter 1 for hourglass and 0 for butterfly)");
    scanf("%d", &feedback);

    if (feedback == 1)
    {
        printf("Enter size of hourglass: ");
        scanf("%d", &size);

        if (size <= 0)
        {
            printf("please enter only potitive integers.");
            return 1;
        }

        printf("Enter frame character: ");
        scanf(" %c", &frameChar);

        printf("Enter figure character: ");
        scanf(" %c", &figureChar);

        printf("Do you want to draw a frame around the hourglass? (1 for yes, 0 for no): ");
        scanf("%d", &drawFrame);

        printf("Do you want to leave a blank line or space between the frame and the figure? (1 for blank line, 0 for space): ");
        scanf("%d", &spaceBetween);

        drawHourglass(size, frameChar, figureChar, drawFrame, spaceBetween);
    }
    else if (feedback == 0)
    {
        printf("Enter the size of the butterfly: ");
        scanf("%d", &size);

        if (size <= 0)
        {
            printf("please enter only potitive integers.");
            return 1;
        }

        printf("Enter the character for the butterfly: ");
        scanf(" %c", &ch);

        printf("Enter frame character: ");
        scanf(" %c", &frameChar);

        printf("Do you want to draw a frame around the hourglass? (1 for yes, 0 for no): ");
        scanf("%d", &drawFrame);

        drawButterfly(ch, size, frameChar, drawFrame);
    }

    return 0;
}
