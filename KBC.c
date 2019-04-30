#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<WINDOWS.H>



main()
{ 

	int points_1=0 ;
	int points_2=0 ;
 int points_3=0 ;
	int points_4=0 ;
	int result   ;
	int result_1 ;
	int result_2 ;
	int result_3 ;	
 int result_4 ;
 HANDLE hConsole;
 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 {
	SetConsoleTextAttribute(hConsole, 11);
	
printf(" \n\t \t \t \t \t \t$$$$$$$$$$$$$$$$$$$$");
printf(" \n\t \t \t \t \t \t$$$$$$$$$  $$$$$$$$$");
printf(" \n\t \t \t \t \t \t$$$$$$$$    $$$$$$$$");
printf(" \n\t \t \t \t \t \t$$$$$$$      $$$$$$$");
printf(" \n\t \t \t \t \t \t$$$$$$        $$$$$$");
printf(" \n\t \t \t \t \t \t$$$$$          $$$$$");
printf(" \n\t \t \t \t \t \t$$$$     K      $$$$");
printf(" \n\t \t \t \t \t \t$$$              $$$");
printf(" \n\t \t \t \t \t \t$$                $$");
printf(" \n\t \t \t \t \t \t$        B         $");
printf(" \n\t \t \t \t \t \t$$                $$");
printf(" \n\t \t \t \t \t \t$$$              $$$");
printf(" \n\t \t \t \t \t \t$$$$     C      $$$$");
printf(" \n\t \t \t \t \t \t$$$$$          $$$$$");
printf(" \n\t \t \t \t \t \t$$$$$$        $$$$$$");
printf(" \n\t \t \t \t \t \t$$$$$$$      $$$$$$$");
printf(" \n\t \t \t \t \t \t$$$$$$$$    $$$$$$$$");
printf(" \n\t \t \t \t \t \t$$$$$$$$$ $$$$$$$$$$");
printf(" \n\t \t \t \t \t \t$$$$$$$$$$$$$$$$$$$$");
}
/*
printf("\n");
    printf("------------\n");
    
    {
				
				 printf("BOLLYWOOD FILMS\n");
				}
					printf("------------\n"); 
					printf("\n");*/



printf(" \n \n \n CREATED BY : HUSSAIN GHAZALI \n , SECTION = A \n  , 17K-3900 \n \n ");

/*
printf("\n \nARE YOU ELIGIBLE FOR THIS COMPETITION ? answer this simple Qs \n");
printf("\n \nWhen I was 2 years old my brother was half of my age.\n Now, I'm 100 years old. What's the age of my brother right now?");
int age ;
scanf("%d",&age);



if(age==99)
printf("\n \nCONGRATULATION YOU ARE SELECTED IN KBC");

else
printf("\n \nGO AND GET SOME KNOWLEDGE");
*/

{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}

{
   SetConsoleTextAttribute(hConsole, 14);	
	
    int i, j, number_of_rows;
    char name[50];
    int length_of_name;

    printf("\n \nEnter your name please : ");
    gets(name);
 
    printf("\n \nEnter value of n : ");
    scanf("%d", &number_of_rows);

    length_of_name = strlen(name);

    
    for(i=number_of_rows/2; i<=number_of_rows; i+=2)
    {
        for(j=1; j<number_of_rows-i; j+=2)
        {
            printf(" ");
        }
 
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
 
        for(j=1; j<=number_of_rows-i; j++)
        {
            printf(" ");
        }
 
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
 
        printf("\n");
    }
 
   
    for(i=number_of_rows; i>=1; i--)
    {
        for(j=i; j<number_of_rows; j++)
        {
            printf(" ");
        }
        
        
        if(i == number_of_rows) 
        {
            for(j=1; j<=(number_of_rows * 2-length_of_name)/2; j++)
            {
                printf("*");
            }   

            printf("%s", name);

            for(j=1; j<(number_of_rows*2-length_of_name)/2; j++)
            {
                printf("*");
            }
        }
        else 
        {
            for(j=1; j<=(i*2)-1; j++)
            {
                printf("*");
            }
        }
 
        printf("\n");
    }
 
   
}

{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
SetConsoleTextAttribute(hConsole, 14);
printf("\n \nRULES OF THE GAME ARE AS FOLLOWS : \n");
printf("\nRULE 1 : There will be 5 Questions IN 4 SECTIONS EACH ");
printf("\nRULE 2 : For every question there will be 3 to 4 options ");
printf("\nRULE 3 : For every correct answer you will be rewarded 2 points / \nfor every incorrect answer 1 point of yours will be neglected ");
printf("\nBEST OF LUCK NIGGA\n \n \n");

}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
           SetConsoleTextAttribute(hConsole, 240); 
            printf("*");
        }
        
        
        printf("\n");
    }}
{
SetConsoleTextAttribute(hConsole, 10);
printf("\n \n ROUND 1 BEGINS");

printf("\n");
    printf("------------\n");
    
    {
				
				 printf("BOLLYWOOD FILMS\n");
				}
					printf("------------\n"); 
					printf("\n");
}
{
SetConsoleTextAttribute(hConsole, 14);
printf("QUESTION 1 : Complete this Amitabh Bachchan dialogue from Kaalia");



printf("\n \nHum jahaan pe khade ho jaate hain ...\n");
}
{
SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n"); }

printf("\n a) khel wahan shuru hota hai" );
printf("\n b) wahin khade rehte hain." );
printf("\n c) line wahin se shuru hoti hai");

getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
{	SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'c')
{

printf("\nCONGRATULATIONS right answer \n \n");
points_1+=2 ;
}
else
{
//printf("\nbetter luck next time GOOD BYE");
printf("\n Unfortunately wrong answer \n \n");
points_1-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
 {
SetConsoleTextAttribute(hConsole, 14);   
printf("\n \n QUESTION 2 : How did supervillain Ajit introduce himself to the world in Kalicharan?");
printf("\n \nSaara shaher mujhe..\n");}
{ 

SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf(" \na) Loin ke naam se jaanta hai . \n b) dekh ke hi dar jaata hai. \n c) pehchaanta hai " );
}

{
SetConsoleTextAttribute(hConsole, 7);
getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();

if(getche() == 'a')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_1+=2 ; ;}
else
{
printf("\n Unfortunately wrong answer \n \n");
points_1-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
{
SetConsoleTextAttribute(hConsole, 14);
printf("\n \n QUESTION 3 : How does Amrish Puri express his pleasure in Mr India?");
printf("\n \nMogambo...\n"); }

{
SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf("\n a) Jeet gaya \nb) Ki Jai Ho \n c) Khush hua");
}

	{
SetConsoleTextAttribute(hConsole, 7);

getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();

if(getche() == 'c')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_1+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_1-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }} 
		 
{
	{	SetConsoleTextAttribute(hConsole, 14);			 
printf(" \n \n QUESTION 4 : Aamir Khan emasculates men with his compliments in Andaz Apna Apna. Complete the phrase");
printf("\n \nAap to purush hain hi nahin!\n"); }
{
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf("\n a) Mahapurush Hain \n b) Farishtey hain \n  c) Darinde hain.");
  
getche();  
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
	
{	SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'a')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_1+=2 ;}
else
{

//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_1-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
    {
				{	SetConsoleTextAttribute(hConsole, 14);
printf("\n \n QUESTION 5 : Salman Khan went larger than life in Wanted, and a lot of it was because of this line:");
printf("\n \n Ek baar jab main koi commitment kar leta hoon..\n"); }
{
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");

printf("\n a) Toh phir main apni bhi nahin sunta \n  b) Toh main commitment kar leta hoon \n  c) Toh usse poora karne tak sota nahin hoon.");

getche();  
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
{	SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'a')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_1+=2 ;}
else
{

//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer\n \n");  
points_1-=1 ;
}}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}

{
SetConsoleTextAttribute(hConsole, 11);
result_1=points_1*10000 ;

printf("\n \nYOU HAVE EARNED ===  $ %d IN ROUND 1 \n \n",result_1);
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \n ROUND 2 BEGINS !!!");

printf("\n \n \n");
    printf("------------\n");
    
    {
				
				 printf("FOOTBALL\n");
				}
					printf("------------\n"); 
					printf("\n");
				}
					{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
					{
					{	SetConsoleTextAttribute(hConsole, 14);
					printf("\n \n QUESTION 1 : Who netted United's first-ever Premier League goal?"); }
					{
					{	SetConsoleTextAttribute(hConsole, 10);
					printf("\n \nOPTIONS : \n");
					printf("\n a)Mark Hughes \n b) Bryan Robson \n c) Steve Coppell");
					
					getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
{	SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'a')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_2+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_2-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
    
    {
				{	SetConsoleTextAttribute(hConsole, 14);
    
printf("\n \n QUESTION 2 : How many Manchester United players were in England's Euro 2016 squad?");}
{
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf("\n a) Three \n b) four \n c) two");

					getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
	
{	SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'a')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_2+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_2-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 10);
            printf("*");
        }
        
        
        printf("\n");
    }}
    {
				{	SetConsoleTextAttribute(hConsole, 14);

printf("\n \n QUESTION 3 : What is Sir Alex Ferguson's middle name?");
}
{
	
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf(" \n a) Rob \n b) Chapman \n c) Brian Kidd");

					getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
{	SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'b')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_2+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_2-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
    {
    	
				{	SetConsoleTextAttribute(hConsole, 14);

printf("\n \n QUESTION 4 : How many times has Sir Alex Ferguson been crowned 'Manager of the Year'?");
}
{
{	SetConsoleTextAttribute(hConsole, 10);

printf("\n \nOPTIONS : \n");
printf("\n a) 10 \n b) 13 \n c) 11");

					getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
{	SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'c')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_2+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_2-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
{	SetConsoleTextAttribute(hConsole, 14);
printf("\n \n QUESTION 5 : Manchester United beat which team 8-2 in the 2011/12 Premiership season?");
}
{
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf("\n a) ARSENAL \n b) CHELSEA \n c) MAN CITY");

					getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
	{	SetConsoleTextAttribute(hConsole, 7);

if(getche() == 'a')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_2+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_2-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
SetConsoleTextAttribute(hConsole, 11);
result_2=points_2*10000 ;

printf("\n \nYOU HAVE EARNED ===  $ %d IN ROUND 2 \n \n",result_2);
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \n ROUND 3 BEGINS");

printf("\n");
    printf("------------\n");
    
    {
				
				 printf("CRICKET\n");
				}
					printf("------------\n"); 
					printf("\n");
				}
					{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}

{
{	SetConsoleTextAttribute(hConsole, 14);
printf("\n \n QUESTION 1 :WHO OF THESE THREE HAS THE BEST TEST BOWLING STRIKE-RATE?");
}
{
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf("\n a) WASIM AQRAM \n b) WAQAR YOUNIS \n c) SAEED AJMAL");


					getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
{	SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'b')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_3+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_3-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
{	SetConsoleTextAttribute(hConsole, 14);
printf("\n \n QUESTION 2 : WHO WAS FIRST TO MAKE THEIR ODI DEBUT?"); }
{
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf("\n a) Misbah-ul-Haq \n b) Danish Kaneria \n c) Kamran Akmal");

					getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
{	SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'b')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_3+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_3-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
{	SetConsoleTextAttribute(hConsole, 14);
printf("\n \n QUESTION 3 : WHICH OF THESE PLAYERS HAS HIT THE MOST SIXES IN TEST CRICKET?");
}
{
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf("\n a) Imran Khan \n b) Younus Khan \n c) Wasim Akram");


					getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
{	SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'b')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_3+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_3-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
{	SetConsoleTextAttribute(hConsole, 14);
printf("\n \n QUESTION 4 : Who was the captain of Pakistan in the 1996 world cup?");
}
{
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf("\n a) Moin Khan \n b)  Saleem Malik \n c) Imran Khan " );  
 
 


					getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
	
{	SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'c')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_3+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_3-=1 ;
} 
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
{	SetConsoleTextAttribute(hConsole, 14);
printf("\n \n QUESTION 5 : Which of the following scored a century on test debut first?");
}
{
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf("\n a) Saeed anwar \n b)  Saleem Malik \n c) Imran Khan " );

 
						getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
{	SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'b')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_3+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_3-=1 ;
}  
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}

{
SetConsoleTextAttribute(hConsole, 11);
result_3=points_3*10000 ;

printf("\n \nYOU HAVE EARNED ===  $ %d IN ROUND 3 \n \n",result_3);
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
	
{	SetConsoleTextAttribute(hConsole, 10);
printf("\n \n ROUND 4 BEGINS !!!");

printf("\n \n \n");
    printf("------------\n");
    
    {
				
				 printf("COMPUTER SCIENCE\n");
				}
					printf("------------\n"); 
					printf("\n");
				}
					{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
					{
						SetConsoleTextAttribute(hConsole, 14);
					printf("\n \n QUESTION 1 : First operating system designed using C programming language.");
					}
					{
						SetConsoleTextAttribute(hConsole, 10);
					printf("\n \nOPTIONS : \n");
					printf("\n A) DOS \n B) Windows \n C) UNIX"); 


	getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
	SetConsoleTextAttribute(hConsole, 7);

if(getche() == 'c')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_4+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_4-=1 ;
}  
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
SetConsoleTextAttribute(hConsole, 14);
printf("\n \n QUESTION 2 : For the below definition what is the data type of ‘PI’ \n #define PI 3.141");
}
{
SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf("\n a) Its float \n b) Its double \n c) There is no type associated with PI, as it’s just a text substitution "); 

	getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'c')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_4+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_4-=1 ;
} 
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
SetConsoleTextAttribute(hConsole, 14);
printf("\n \n QUESTION 3 : In C, what are the various types of real data type (floating point data type)?");
}
{
SetConsoleTextAttribute(hConsole, 10);	
printf("\n \nOPTIONS : \n");
printf("\n a) Float, long double \n b) long double, short int \n c) float, double, long double");

	getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'c')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_4+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_4-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
    {
				SetConsoleTextAttribute(hConsole, 14);

printf("\n \n QUESTION 4 : Which of the following is a logical operator?");
}
{
SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf("\n a)  ! \n b) && \n c) || \n d) ALL OF THEM ");

	getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
	
SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'd')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_4+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_4-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
    {
				SetConsoleTextAttribute(hConsole, 14);

printf("\n \n QUESTION 5 : full form of (C)");
}
{
SetConsoleTextAttribute(hConsole, 10);
printf("\n \nOPTIONS : \n");
printf("\n a) COMBINED \n b) COMPUTER \n c) NONE");

getche();
printf("\n \n CHOSE YOUR ANSWER : a , b , c \n \n ");
//getche();
}
{
SetConsoleTextAttribute(hConsole, 7);
if(getche() == 'c')
{
printf("\nCONGRATULATIONS right answer \n \n");
points_4+=2 ; ;}
else
{
//printf("\nbetter luck next time GOOD BYE . you earned $20,000");
printf("\n Unfortunately wrong answer \n \n");  
points_4-=1 ;
}
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
SetConsoleTextAttribute(hConsole, 11);
result_4=points_4*10000 ;

printf("\n \nYOU HAVE EARNED ===  $ %d IN ROUND 4 \n \n",result_4);
}
{
    int i, j, rows=5, columns=205;
    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=columns; j++)
        {
            SetConsoleTextAttribute(hConsole, 240);
            printf("*");
        }
        
        
        printf("\n");
    }}
{
SetConsoleTextAttribute(hConsole, 11);
result = result_1 + result_2 + result_3 + result_4 ;
printf("\n \n \nYOU HAVE EARNED ALL TOGETHER ===  $ %d IN 4 ROUNDS \n \n GOOD BYE !!",result);
}
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
