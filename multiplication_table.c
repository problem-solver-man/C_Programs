/*
This program gives multiplication table of an integer.
Date: 15 Feb 2026
Author: Vishesh
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variable declaration/initialization
    int num, status;

    do
    {
        // Taking input from the user
        printf("\n\nEnter an integer: ");
        scanf("%d", &num);
        printf("\nMultiplication Table of %d:\n", num);

        // Showing output to the user
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        // Asking from the user to Re-Run the program
        printf("\nWould you like to print another table?");
        printf("\nEnter 1 for 'Yes' or anything else for 'No': ");
        scanf("%d", &status);
    } while (status == 1);
    return 0;
}

// Thanks for your time.