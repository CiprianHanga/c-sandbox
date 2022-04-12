/* c1-4-e1.c
 *
 * Program care demonstreaza folosirea functiei scanf.
 * Costea-1995, p15
 * Ciprian Hanga, Iasi, 2022-04-03
 */
 #include <stdio.h>

 int main(void)
 {
    int num;
    float f;

    printf("Introduceti un intreg: ");
    scanf("%d",&num);

    printf("Introduceti un numar in virgula mobila: ");
    scanf("%f",&f);

    printf("%d\n",num);
    printf("%f",f);

    return 0;
 }
