#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    int fiyat;
    float sonFiyat;

    printf("Welcome to Product Tax Calculation\n");
    printf("*****************************************\n");
    printf("Press The Required Key For The Product You Want to Calculate\n");
    printf("Press 0 For The Book.\n");
    printf("Press 1 for Basic Food.\n");
    printf("Press 2 for Luxury Product.\n");
    printf("*****************************************\n");
    printf("Your choice : ");
    scanf("%d",&secim);

    switch(secim)
    {

    case 0:
        printf("Please enter the price of the product: ");
        scanf("%d",&fiyat);
        sonFiyat=fiyat*(0.04)+fiyat;
        printf("\nThe final price of the product is %.2f.\n",sonFiyat);
        break;

    case 1:
        printf("Please enter the price of the product: ");
        scanf("%d",&fiyat);
        sonFiyat=fiyat*(0.056)+fiyat;
        printf("\nThe final price of the product is %.2f.\n",sonFiyat);
        break;

    case 2:
        printf("Please enter the price of the product: ");
        scanf("%d",&fiyat);
        sonFiyat=fiyat*(0.196)+fiyat;
        printf("\nThe final price of the product is %.2f.\n",sonFiyat);
        break;

    default:
        printf("\nYou Made a Wrong Choice...\n");

    }

    return 0;
}
