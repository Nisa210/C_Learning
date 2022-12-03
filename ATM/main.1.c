#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    int yatirilacakTutar;
    int cekilecekTutar;
    int bakiye=1000;

    while(secim)
    {
        printf("1-Balance Amount\n");
        printf("2-Deposit Money\n");
        printf("3-Withdraw Money\n");
        printf("0-EXIT\n");
        printf("Please make a selection : ");
        scanf("%d",&secim);
        switch(secim)
        {
        case 0:
            break;
        case 1:
            printf("Your balance : %d\n",bakiye);
            break;
        case 2:
            printf("Please Enter The Amount You Want To Deposit : \n");
            scanf("%d",&yatirilacakTutar);
            printf("The deposit was successful.\n");
            bakiye=bakiye+yatirilacakTutar;
            printf("Your Last Balance : %d\n",bakiye);
            break;
        case 3:
            printf("Please enter the amount you want to withdraw : \n");
            scanf("%d",&cekilecekTutar);
            if(cekilecekTutar>bakiye)
            {
                printf("You have entered an amount higher than the balance!\n");
            }
            else
            {
                printf("Withdrawal successful.\n");
                bakiye=bakiye-cekilecekTutar;
                printf("Your Last Balance : %d\n",bakiye);

            }
            break;
        default:
            printf("You Made a Wrong Choice!\n");
            break;
        }

    }


    return 0;
}
