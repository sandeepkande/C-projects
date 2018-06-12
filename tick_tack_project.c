#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
char a[]={'0','1','2','3','4','5','6','7','8','9'};
char b[]={'0','1','2','3','4','5','6','7','8','9'};


int k , choice , player = 1 ,  i , cont ;

char mark;


int main()
{
     
    int board();   //for draw board of tick_tack_toe...

    int win();     //check for wins...

p:
do
{

    board();

   player = (player % 2) ? 1 : 2;

   printf("player %d Enter Your choice..",player);
   scanf("%d",&choice);

   mark = (player==1) ? 'X' : 'O';

   if(choice==1 && a[1]=='1')
   {
   a[1]=mark;
   }
  else if(choice==2&&a[2]=='2')
  {
   a[2]=mark;
  }
  else if(choice==3&&a[3]=='3')
   {
   a[3]=mark;
   }
  else if(choice==4&&a[4]=='4')
   {
   a[4]=mark;
   }
  else if(choice==5&&a[5]=='5')
   {
   a[5]=mark;
   }
  else if(choice==6&&a[6]=='6')
   {
    a[6]=mark;
   }
  else if(choice==7&&a[7]=='7')
  {
   a[7]=mark;
  }
  else if(choice==8&&a[8]=='8')
  {
   a[8]=mark;

  }
  else  if(choice==9&&a[9]=='9')
  {
   a[9]=mark;
  }
   else
   {
    printf("Invalid move");

    player--;
    getch();
   }
   k=win();
   player++;
}
while(k == 0);
 if(k==1)
 {
	   system("cls");
	
	   board();
	
	     printf("\n\nplayer %d win\n",--player);
	      printf("do you want to continue......\n1 Yes\n 2 No\n");
	    scanf("%d",&cont);
	    if(cont==1)
	    {
	        conti();
	        goto p;
	    }
 }
 else
    {

    printf("game Draw\n");
    printf("do you want to continue......\n1 Yes\n 2 No\n");
    scanf("%d",&cont);
    if(cont==1)
    {
        conti();
        goto p;
    }
    printf("\t\t\t\t\t\t\tThanxx for Playing");
    getch();

    }

  return 0;
getch();
}
int board()
{
          system("cls");
          printf("\n\n\n\t\tTICK TACK TOE\n\n\n");
          printf("Created by SANDEEP\n\n\n\n");
          printf("      |      |     \n");
          printf("   %c  |  %c   |  %c  \n",a[1],a[2],a[3]);
          printf("______|______|_____\n");
          printf("      |      |     \n");
          printf("   %c  |  %c   |  %c  \n",a[4],a[5],a[6]);
          printf("______|______|_____\n");
          printf("      |      |     \n");
          printf("   %c  |  %c   |  %c  \n",a[7],a[8],a[9]);
          printf("      |      |   \n");

          printf("\n\nPlayer 1 X\nPlayer 2 O\n");
        }
        int win()
{
    if(a[1]==a[2] && a[2]==a[3])
        return 1;
     else if(a[4]==a[5] && a[5]==a[6])
        return 1;
     else if(a[7]==a[8] && a[8]==a[9])
        return 1;
     else if(a[1]==a[5] && a[5]==a[9])
        return 1;
     else if(a[1]==a[4] && a[4]==a[7])
        return 1;
     else if(a[2]==a[5] && a[5]==a[8])
        return 1;
     else if(a[3]==a[6] && a[6]==a[9])
        return 1;
     else if(a[7]==a[5] && a[5]==a[3])
        return 1;
     else if (a[1] != '1' && a[2] != '2' && a[3] != '3' &&
        a[4] != '4' && a[5] != '5' && a[6] != '6' && a[7]
        != '7' && a[8] != '8' && a[9] != '9')
       return -1;

      else
        return 0;
}

int conti()
  {

    for(i=0;i<=9;i++)
      {
        a[i]=b[i];
      }
        return 0;
  }
