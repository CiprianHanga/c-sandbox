/* c1-4-t.c
 *
 * Program care demonstreaza calculul si afisarea a doua numere in virgula mobila.
 * Costea-1995, p15
 * Ciprian Hanga, Iasi, 2022-04-03
 */
 #include <stdio.h>

int main(void)
{
    float a;
    float b;
    float result;

    printf("Introduceti primul numar fractionar: ");
    scanf("%f",&a);

    printf("Introduceti al doilea numar fractionar: ");
    scanf("%f",&b);

    result = a+b;
    printf("\nSuma celor doua numere este: %f\n", result);

    return 0;
}
