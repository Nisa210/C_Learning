#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void hosgeldinizfonk()
{
    printf("Welcome to Knowledge Contest !\nPlease Read Rules...\n\n");
    printf("1-Our competition is point system...\n");
    printf("2-Please enter your username correctly...\n");
    printf("3-Sign up if you are not registered...\n");

}

int secimfonk()
{
    int secim;
    printf("Please choose one of the options below...\n");
    printf("1-Login\n");
    printf("2-Signup\n");
    scanf("%d",&secim);
    return secim;
}

int girisYapfonk(char isim[20],char sifre[20])
{
    char alinanisim[20];
    char alinansifre[20];

    int kontrol=0;
    while(kontrol==0)
    {
    printf("Please Enter Your Name : \n");
    scanf("%s",&alinanisim);
    printf("Please Enter Your Password : \n");    
	scanf("%s",&alinansifre);
    if(strcmp(isim,alinanisim)==0 &&strcmp(sifre,alinansifre)==0)
    {
        printf("Welcome to System!\n\n");
		kontrol=1;
    }
    else
    {
        printf("Incorrect Entry!\n\n");
	
	}
    }
}

int kayitOlfonk()
{
    char isim[20];
    char sifre[20];
    printf("Please Enter A Name : \n");
	scanf("%s",&isim);
    printf("Please Enter A Password : \n");
	scanf("%s",&sifre);
    printf("Your Registration has been Successfully Made.\n");
    printf("You are Redirected to the Login Screen...\n");
	girisYapfonk(isim,sifre);
}

int bilgiYarismasi()
{
    char cevap[1];
    int puan=0;
    printf("Quiz Started..\n");
    printf("Your Point : %d\n",puan);
    if(puan==0)
    {
    printf("{Question-1}->Which of the following is the capital of the Republic of Turkey?\n");
    printf("a-Istanbul  b-Ankara  c-Bursa  d-Edirne  e-Izmir\n");
    scanf("%s",&cevap);
    if(strcmp(cevap,"b")==0)
    {

        printf("Correct Answer...\n");
		puan+=10;
        printf("Your Point For This Question: %d \n",puan);
    }
    else
    {
        printf("Incorrect Answer...\n");
        printf("Your Point For This Question : %d \n",puan);    
	
	}
    }
    if(puan==10)
    {
    printf("{Question-2}->How many hours are there in a year (rounded to the nearest hour)?\n");
    printf("a-8760  b-8660  c-8560  d-8260  e-9860\n");
    scanf("%s",&cevap);
    if(strcmp(cevap,"a")==0)
    {

        printf("Correct Answer...\n");
		puan+=10;
        printf("Your Point For This Question : %d \n",puan);
	}
    else
    {
        printf("Incorrect Answer...\n");
        printf("Your Point For This Question : %d \n",puan);
    }
    }

    return puan;
}

int main()
{
    char isim[20]="nisa";
    char sifre[20]="1234";

    hosgeldinizfonk();
    int secim=secimfonk();

        if(secim==1)
    {
        girisYapfonk(isim,sifre);

    }
    else if(secim==2)
    {
        kayitOlfonk();

    }

    bilgiYarismasi();





    return 0;
}
