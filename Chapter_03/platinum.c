/* platinum.c  --  your weight in platinum */
#include <stdio.h>
int main(void)
{
    float weight;  /* your weight */
    float value;   /* platinum equivalent */

    printf("Are you worth your weight in platinum?\n");
    printf("Enter your weight in pounds: ");

    /* get input from the user */
    scanf("%f", &weight);

    /* assume platium is worth $1700 per ounce */
    /* 14.5833 converts pounds adv. to ounces troy */
    value = weight * 1700.0 * 14.5833;

    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}