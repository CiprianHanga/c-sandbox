/* c1-5-e3.c
 *
 * Program care calculeaza aria unui patrulater.
 * Demonstratie pentru functiile printf si scanf.
 *
 * Costea-1995, p16
 * Ciprian Hanga, Iasi, 2022-04-04
 */
 #include <stdio.h>

 int main(void)
 {
    int lung, lat;

    printf("Introduceti lungimea: \n");
    scanf("%d",&lung);

    printf("Introduceti latimea: \n");
    scanf("%d",&lat);

    printf("Aria este: %d \n",lung*lat);

    return 0;
 }
