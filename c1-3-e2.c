/* c1-3-e2.c
 *
 * Program care demonstreaza afisarea valorilor char, float si double in printf.
 * Costea-1995, p14
 * Ciprian Hanga, Iasi, 2022-04-03
 */
 #include <stdio.h>

 int main(void)
 {
    char ch;
    float f;
    double d;

    ch = 'x';
    f = 100.123;
    d = 123.009;

    printf("ch = %c\n",ch);
    printf("f = %f\n",f);
    printf("d = %f\n",d);

    return 0;
 }
