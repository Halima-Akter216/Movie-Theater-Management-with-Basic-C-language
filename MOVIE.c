#include <stdio.h>
#include <stdlib.h>


int vip_price(int vtn,int vtp)
{

    int halima;

    halima=(vtn*vtp);


    return vtn*vtp;

}

int normal_price(int ntn,int ntp)
{


    int tonima;
    tonima=(ntn*ntp);

    return tonima;
}

int main ()
{

    int a,b,i,n,f;

    FILE * fptr;
    char str[1000];
    char fname[100]="movie.txt";
    char str1;

//n is use for movie movie number,f is for mvlist loop
    int vtp,ntp;
//vtp and ntp for vip & normal ticket price|
    char udm[40];
    char udp[30];
    char confirmpass[40];
    //udm for user mail | upd for user pass
    //confirmpass eta use kortesi jodi user signup korte chay tokhon er jonno



   printf("\t ****************************** MOVIE THEATOR MANAGEMENT ****************************** \n");
   printf("\t----------------------------------------------------------------------------------------\n");
    printf("\t----------------------------------------------------------------------------------------\n");



    printf("\n");
     printf("\n");
      printf("\n");

    printf("\npress 1 for admin mode\n");
    printf("\npress 2 for user mode\n");
    printf("\nFor exit press whatever you want\n");

    printf("\nYour choice is : ");
    scanf("%d",&a);
    if(a==1)
    {
 printf("\n");
     printf("\n");
      printf("\n");


     printf("\t ****************************** ADMIN PANEL ****************************** \n");
        printf("\t----------------------------------------------------------------------------------------\n");
    printf("\t----------------------------------------------------------------------------------------\n");

      printf("\n");
     printf("\n");
      printf("\n");


        char adm[40];
        char adp[30];

    //adm for admin mail | adp for admin password
        printf("\nUsername : ");
        scanf("%s",&adm);
        printf("\npassword :");
        scanf("%s",&adp);

        int edit;
        // edit use kortesi emnei option baranor jonno

        printf("\nIf you want to Edit Movie List/Watch time Press 1 and for logout type whatever you want :D\n");

        printf("\nYour choice is : ");

        scanf("%d",&edit);

        if(edit==1)
        {

            printf("\nHow many movie you want play in your movie theater: ");
            scanf("%d",&n);

            printf("\nPut you movie list bellow\n");
            printf("\nif you do not know how to write then you can see the example bellow\n");

            printf("\nFor Example : 1. (Forrest Gump)  Movie will start at 10.00 & end at 13.00\n");
            printf("\nType carefully ! Let's Start :D\n");
              printf("\n");
     printf("\n");
      printf("\n");

            FILE * fptr;
            char str[1000];
            char fname[100]="movie.txt";
            char str1;
            fptr = fopen (fname,"w");
            for(i = 0; i < n+1; i++)
            {
                fgets(str, sizeof str, stdin);
                fputs(str, fptr);
            }
            fclose (fptr);

            printf("\nThe price of VIP ticket :");
            scanf("%d",&vtp);
            printf("\nThe price of Normal ticket :");
            scanf("%d",&ntp);



        }
        else
        {
            //this else is use for admin exit or  logout

        }
    }

    //user panel
//`halima part




    else if (a==2)
    {
 printf("\n");
     printf("\n");
      printf("\n");


        printf("\t ****************************** USER PANEL ******************************\n ");
        printf("\t------------------------------------------------------------------------\n");
        printf("\t------------------------------------------------------------------------\n");

      printf("\n");
     printf("\n");
      printf("\n");


        printf("\nFor Sign up press 1");
        printf("\nDo have already an account? For log in press 2\n");
        printf("\nFor exit press whatever you want\n");


        int sunny;
        //sunny is choice of user
        printf("\nYour choice is : ");
        scanf("%d",&sunny);

        if (sunny==1)
        {

            printf("\nEnter Your Email : ");
            scanf("%s",&udm);
            printf("\npassword :");
            scanf("%s",&udp);
            printf("\nconfirm password :");
            scanf("%s",&confirmpass);
        }

        else if(sunny ==2)
        {

            printf("\nUsername : ");
            scanf("%s",&udm);
            printf("\npassword :");
            scanf("%s",&udp);
        }
        else
        {

        }

       printf("\n");
        printf("\t***************Our Movie list & watch time***************");
          printf("\n");


        // file ta k call  korbo ekhon


        fptr = fopen (fname, "r");

        str1 = fgetc(fptr);
        while (str1 != EOF)
        {
            printf ("%c", str1);
            str1 = fgetc(fptr);
        }
        printf("\n\n");
        fclose (fptr);

        printf("\nWhich movie you want to watch? Press the movie number\n");

        int mvc;
        printf("\nYour choice is : ");
        scanf("%d",&mvc);


        printf("\nIf you want to buy ticket Press 1, for logout press whatever you want\n");

        int tchoice;
        //tchoice for ticket  choice
        printf("\nYour choice is : ");
        scanf("%d",&tchoice);
        if (tchoice==1)
        {

            printf("\nWhich ticket You wanna buy ?\n");
            printf("\nFor VIP ticket press 1\n");
            printf("\nFor Normal ticket press 2\n");

            int vnchoice;
            //vnchoice use for vip and normal ticket choice
            printf("\nYour choice is : ");
            scanf("%d",&vnchoice);

            if (vnchoice==1)
            {


                printf("\nHow much VIP ticket you want?\n");

                int vtn;
                int tp;
                int vtp=500;
                scanf("%d",&vtn);

                tp=vip_price(vtn,vtp);

                printf("\nThe value of %d Ticket is %d tk. only\n",vtn,tp);
            }
            else if (vnchoice==2)
            {

                printf("\nHow much Normal ticket you want?\n");

                int ntn;
                int tp1;
                int ntp=300;
                scanf("%d",&ntn);

                tp1=normal_price(ntn,ntp);

                printf("\nThe value of %d Ticket is %d tk. only\n",ntn,tp1);
            }

             printf("\n");

      printf("\n");

              printf("\n");
        printf("\t*************** THANKS FOR YOUR PURCHASE ***************\n");
        printf("\t--------------------------------------------------------\n");
        printf("\t--------------------------------------------------------\n");

    printf("\n");

      printf("\n");


        }
        else
        {

        }


    }
    else
    {

    }

     printf("\n");
        printf("\t**************** ALLAH HAFEZ ***************");
          printf("\n");

    return 0;
}
