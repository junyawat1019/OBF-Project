//Prepared by group 9
//develop 7 days until died
//Do not copy or use without permission.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>

#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)

int n,n1,n2,n3,n4,n5,n6,n7,n8,n9;
int i,j,h,k,l,p,b,c;
int load;
int main_exit;
void menu();

struct
date{
    int month,day,year;
};
struct
{
    char name[60];
    int amount;
    int acc_no;
    char address[60];
    double phone;
    struct date dob;
    struct date deposit;
    struct date withdraw;
}add,upd,check,rem,transaction;

void posxy(int x, int y)
{
     COORD coord;
     coord.X = x;
     coord.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void close()
{
     posxy(15,6); textcolor(4,0);  printf(" ######## ##                                ## ");
     posxy(15,7); textcolor(12,0); printf("    ##    ##                                ##  ## ");
     posxy(15,8); textcolor(6,0);  printf("    ##    ##   ####   #####     ##    ####  ## ##       ##     ##   #####    ##  ## ");
     posxy(15,9); textcolor(2,0);  printf("    ##    ##  ## ## ###   ###   ##   ## ##  ####         ##   ##  ###   ###  ##  ## ");
     posxy(15,10); textcolor(9,0); printf("    ##    ## ##  ## ###   ####  ## ##   ##  ## ##         ## ##   ###   ###  ##  ## ");
     posxy(15,11); textcolor(1,0); printf("    ##    ###    ##   ##### ### ###     ##  ##  ##         ###      #####    ###### ");
     posxy(15,12); textcolor(13,0);printf("                                                           ## ");
     posxy(15,13); textcolor(5,0); printf("                                                          ## ");
     textcolor(15,0);
}

int main()
{
     char pass[10],password[10]="1234";
     posxy(10,6); textcolor(4,0); printf(" ##   ###   ##  ########  ##       #######  ########    ##       ##   ########     ########  #######  ");Sleep(150);
     posxy(10,7); textcolor(12,0); printf(" ##   ###   ##  ##        ##      ##       ##      ##  ## ##   ## ##  ##              ##    ##     ##  ");Sleep(150);
     posxy(10,8); textcolor(6,0); printf(" ##   ###   ##  ########  ##      ##       ##      ##  ## ##   ## ##  ########        ##    ##     ## ");Sleep(150);
     posxy(10,9); textcolor(2,0); printf(" ##   ###   ##  ##        ##      ##       ##      ##  ##  ## ##  ##  ##              ##    ##     ##  ");Sleep(150);
     posxy(10,10); textcolor(9,0); printf("  ## ## ## ##   ##        ##      ##       ##      ##  ##   ###   ##  ##              ##    ##     ##  ");Sleep(150);
     posxy(10,11); textcolor(1,0); printf("   ###   ###    ########  #######  #######  ########   ##    #    ##  ########        ##     #######  ");Sleep(150);
     Sleep(1100);
     system("cls");
     try_again:
     posxy(42,6); textcolor(4,0); printf("  ########   ########   ######## ");Sleep(150);
     posxy(42,7); textcolor(12,0); printf(" ##      ##  ##     ##  ##      ");Sleep(150);
     posxy(42,8); textcolor(6,0); printf(" ##      ##  ##     ##  ##       ");Sleep(150);
     posxy(42,9); textcolor(2,0); printf(" ##      ##  ########   ######## ");Sleep(150);
     posxy(42,10); textcolor(9,0); printf(" ##      ##  ##     ##  ##       ");Sleep(150);
     posxy(42,11); textcolor(1,0); printf(" ##      ##  ##     ##  ##       ");Sleep(150);
     posxy(42,12); textcolor(1,0); printf("  ########   ########   ##       ");Sleep(150);
     posxy(30,14); textcolor(12,0); printf(" -------------------------------------------------------");
     posxy(35,15); textcolor(15,0); printf("Order and bill's food Management System_Project");
     posxy(30,16); textcolor(12,0); printf(" -------------------------------------------------------");
     Sleep(1000);
     textcolor(15,0);
     posxy(31,18); printf("Enter the password to login : ");
     scanf("%s",pass);

     if(strcmp(pass,password)==0){
       posxy(31,19); printf("Password Match!");
       posxy(31,21); printf("loading :");
       posxy(31,22); printf("please wait :");
       for(load=0;load<=41;load+=1)
       {
        printf("_", load);Sleep(20);
       }
       Sleep(800);
       system("cls");
       menu();
     }
     else{
        posxy(31,19); printf("Wrong password!\a");
        main_invalid:
        posxy(31,21); printf("[1] try again ");
        posxy(31,22); printf("[0] go to exit");
        posxy(31,24); printf("Please select : ");
        scanf("%d",&main_exit);
        if(main_exit==1){
           system("cls");goto try_again;
        }
        else if(main_exit==0){
           system("cls");close();
        }
        else{
           posxy(31,25); printf("Invalid!\a");
           Sleep(1000);
           system("cls");
           goto main_invalid;
        }
     }

}

void menu()
{
     int choice;
     loop:
     textcolor(7,0);
     posxy(30,3); printf("888888                      88    888888                       88    "); Sleep(150);
     posxy(30,4); printf("88                          88    88                           88    "); Sleep(150);
     posxy(30,5); printf("88                          88    88                           88    "); Sleep(150);
     posxy(30,6); printf("88                          88    88                           88    "); Sleep(150);
     posxy(30,7); printf("888888  88888      8888   888888  888888  88888   88888   8888888    "); Sleep(150);
     posxy(30,8); printf("88     88   88    88   8    88    88     88   88 88   88 88    88    "); Sleep(150);
     posxy(30,9); printf("88     88   888     88      88    88     8     8 8     8 8     88    "); Sleep(150);
     posxy(30,10); printf("88     88  88 88  8   88    88    88     88   88 88   88 88    88    "); Sleep(150);
     posxy(30,11); printf("88       888   88  8888     88    88      88888   88888   8888888    "); Sleep(150);
     posxy(30,14); textcolor(12,0); printf("-----------------------------------------------------------------");
     posxy(30,15); textcolor(15,0); printf("                 WELCOME TO Main Menu FastFood");
     posxy(30,16); textcolor(12,0); printf("-----------------------------------------------------------------");
     textcolor(15,0);
     posxy(30,18); printf("[1] Food&beverage Menu");
     posxy(30,19); printf("[2] add list");
     posxy(30,20); printf("[3] View list");
     posxy(30,21); printf("[4] Edit");
     posxy(30,22); printf("[5] Remove");
     posxy(30,23); printf("[0] Exit");
     posxy(30,25); printf("Please enter select menu : ");
     scanf("%d", &choice);
     switch(choice){
        case 1:system("cls");Fbmenu();
        break;
        case 2:system("cls");add_list();
        break;
        case 3:system("cls");view_list();
        break;
        case 4:system("cls");edit();
        break;
        case 5:system("cls");erase();
        break;
        case 0:system("cls");close();
        break;
        default :
        posxy(30,26); printf("Invalid!\a");
        Sleep(1500);
        system("cls");
        menu();
     }
}

void add_list()
{
    FILE *ptr;
    ptr=fopen("recordlist.dat","a+");
    account_no:
    posxy(26,2); printf("|----------------------------------------------------------------------|");
    posxy(26,3); printf("|----------------------------------------------------------------------|");
    posxy(26,4); printf("|                               Add List                               |"); Sleep(200);
    posxy(26,5); printf("|----------------------------------------------------------------------|");
    posxy(26,6); printf("|----------------------------------------------------------------------|");
    posxy(28,8); printf ("today's date(mm/dd/yyyy) : ");
    scanf("%d/%d/%d",&add.deposit.month,&add.deposit.day,&add.deposit.year);
    posxy(28,10); printf("Enter the account number : ");
    scanf("%d",&check.acc_no);
    while(fscanf(ptr,"%d %s %s %lf %d %d/%d/%d",&add.acc_no,add.name,add.address,&add.phone,&add.amount,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if (check.acc_no==add.acc_no)
            {
            posxy(28,11);printf("Account no. already in use!\a");
            Sleep(1000);
            system("cls");
            goto account_no;
            }
    }
    add.acc_no=check.acc_no;
    posxy(28,12); printf("Enter the name : ");
    scanf("%s",add.name);
    posxy(28,14); printf("Enter the address : ");
    scanf("%s",add.address);
    posxy(28,16); printf("Enter the phone number : ");
    scanf("%lf",&add.phone);

        fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

    posxy(26,18); printf("|----------------------------------------------------------------------|");
    posxy(26,19); printf("|                           List successfully!                         |");
    posxy(26,20); printf("|----------------------------------------------------------------------|");
    Sleep(1500);
    system("cls");
    paymenu();
}

void view_list()
{
    FILE *view;
    view=fopen("recordlist.dat","r");
    int test=0;
    system("cls");
    posxy(2,0); printf("|------------------------------------------------------------------------------------------------------------------|");
    posxy(2,1); printf("|\tList No.  \t\t\tAmount Baht.                                                                                    |");
    posxy(2,2); printf("|------------------------------------------------------------------------------------------------------------------|");
    while(fscanf(view,"%d %s %s %lf %d %d/%d/%d",&add.acc_no,add.name,add.address,&add.phone,&add.amount,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        printf("\n\t%d  \t\t\t\t%d",add.acc_no,add.amount);
        test++;
    }
    fclose(view);
    if (test==0)
    {
        printf("\n\tNO RECORDS!!\a");
    }
     printf("\n\n  [1]show insights / [2]go to main menu / [0]go to exit");
     printf("\n  | Please select : ");
     scanf("%d",&main_exit);
     if (main_exit==1){
         system("cls");insights();
     }
     else if(main_exit==2){
         system("cls");menu();
     }
     else if(main_exit==0){
         system("cls");close();
     }
     else{
         printf("\n\tInvalid!\a");
         Sleep(1500);
         system("cls");
         view_list();
     }
}

void insights()
{
    FILE *view;
    view=fopen("recordlist.dat","r");
    int test=0;
    system("cls");
    posxy(2,0); printf("|------------------------------------------------------------------------------------------------------------------|");
    posxy(2,1); printf("|\tList No. \tName. \t\tAddress. \t\t\tPhone.                                                                      |");
    posxy(2,2); printf("|------------------------------------------------------------------------------------------------------------------|");
    while(fscanf(view,"%d %s %s %lf %d %d/%d/%d",&add.acc_no,add.name,add.address,&add.phone,&add.amount,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        printf("\n\t%d \t\t%s \t\t%s\t \t0%.0lf",add.acc_no,add.name,add.address,add.phone);
        test++;
    }
    fclose(view);
    if (test==0)
    {
        printf("\n\tNO RECORDS!!\a");
    }
     printf("\n\n  [1]show general information / [2]go to main menu / [0]go to exit");
     printf("\n  | Please select : ");
     scanf("%d",&main_exit);
     if (main_exit==1){
         system("cls");view_list();
     }
     else if(main_exit==2){
         system("cls");menu();
     }
     else if(main_exit==0){
         system("cls");close();
     }
     else{
         printf("\n\tInvalid!\a");
         Sleep(1500);
         system("cls");
         view_list();
     }
}

void edit(void)
{
    FILE *old,*newrec;
    int choice,test=0;
    char pass_edit[10],password_edit[10]="1234";
    posxy(26,2); printf("|----------------------------------------------------------------------|");
    posxy(26,3); printf("|----------------------------------------------------------------------|");
    posxy(26,4); printf("|                               Edit List                              |"); Sleep(200);
    posxy(26,5); printf("|----------------------------------------------------------------------|");
    posxy(26,6); printf("|----------------------------------------------------------------------|");
    posxy(28,8); printf("Enter the password to edit list : ");
    scanf("%s",pass_edit);
     if(strcmp(pass_edit,password_edit)==0){
       posxy(28,9); printf("Password Match!");
       posxy(28,11); printf("loading :");
       posxy(28,12); printf("please wait :");
       for(load=0;load<=55;load+=1)
       {
        printf("_", load);Sleep(20);
       }
       Sleep(800);
       system("cls");
       goto edit_ses;
     }
     else{
        posxy(28,9); printf("Wrong password!\a");
        edit_invalid_1:
        posxy(28,11); printf("[1] try again ");
        posxy(28,12); printf("[2] go to main menu");
        posxy(28,13); printf("[0] go to exit");
        posxy(28,15); printf("Please select : ");
        scanf("%d",&main_exit);
        if(main_exit==1){
           system("cls");edit();
        }
        else if(main_exit==2){
           system("cls");menu();
        }
        else if(main_exit==0){
           system("cls");close();
        }
        else{
           posxy(28,16); printf("Invalid!\a");
           Sleep(1000);
           system("cls");
           goto edit_invalid_1;
        }
     }
    edit_ses:
    old=fopen("recordlist.dat","r");
    newrec=fopen("newlist.dat","w");
    posxy(26,2); printf("|----------------------------------------------------------------------|");
    posxy(26,3); printf("|----------------------------------------------------------------------|");
    posxy(26,4); printf("|                               Edit List                              |"); Sleep(200);
    posxy(26,5); printf("|----------------------------------------------------------------------|");
    posxy(26,6); printf("|----------------------------------------------------------------------|");
    posxy(28,8); printf("Enter account no. For customers who want to change information : ");
    scanf("%d",&upd.acc_no);
    while(fscanf(old,"%d %s %s %lf %d %d/%d/%d",&add.acc_no,add.name,add.address,&add.phone,&add.amount,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if (add.acc_no==upd.acc_no)
        {
            test=1;
            posxy(28,10); printf("Which information do you want to change?");
            posxy(28,11); printf("[1] Address");
            posxy(28,12); printf("[2] Phone");
            posxy(28,14); printf("Enter your choice : ");
            scanf("%d",&choice);
            system("cls");
            if(choice==1)
            {
                posxy(26,2); printf("|----------------------------------------------------------------------|");
                posxy(26,3); printf("|----------------------------------------------------------------------|");
                posxy(26,4); printf("|                           Edit List (address)                        |"); Sleep(200);
                posxy(26,5); printf("|----------------------------------------------------------------------|");
                posxy(26,6); printf("|----------------------------------------------------------------------|");
                posxy(28,8); printf("Enter the new address : ");
                scanf("%s",upd.address);
                fprintf(newrec,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,upd.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);
            }
            else if(choice==2)
            {
                posxy(26,2); printf("|----------------------------------------------------------------------|");
                posxy(26,3); printf("|----------------------------------------------------------------------|");
                posxy(26,4); printf("|                            Edit List (phone)                         |"); Sleep(200);
                posxy(26,5); printf("|----------------------------------------------------------------------|");
                posxy(26,6); printf("|----------------------------------------------------------------------|");
                posxy(28,8); printf("Enter the new phone number : ");
                scanf("%lf",&upd.phone);
                fprintf(newrec,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,upd.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);
            }
        }
        else
             fprintf(newrec,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);
    }
    fclose(old);
    fclose(newrec);
    remove("recordlist.dat");
    rename("newlist.dat","recordlist.dat");
        if(test!=1)
        {
            system("cls");
            posxy(26,2); printf("|----------------------------------------------------------------------|");
            posxy(26,3); printf("|----------------------------------------------------------------------|");
            posxy(26,4); printf("|                         Record not found!!\a\a\a                     |");
            posxy(26,5); printf("|----------------------------------------------------------------------|");
            posxy(26,6); printf("|----------------------------------------------------------------------|");
            edit_invalid_2:
            posxy(28,8); printf("[1] try again ");
            posxy(28,9); printf("[2] go to main menu");
            posxy(28,10); printf("[0] go to exit");
            posxy(28,12); printf("Please select : ");
            scanf("%d",&main_exit);
            if(main_exit==1){
               system("cls");edit();
            }
            else if(main_exit==2){
               system("cls");menu();
            }
            else if(main_exit==0){
               system("cls");close();
            }
            else{
               posxy(28,13); printf("Invalid!\a");
               Sleep(1500);
               system("cls");
               goto edit_invalid_2;
            }
        }
        else
        {
            posxy(26,10); printf("|----------------------------------------------------------------------|");
            posxy(26,11); printf("|                            Changes saved!                            |");
            posxy(26,12); printf("|----------------------------------------------------------------------|");
            edit_invalid_3:
            posxy(28,14); printf("[1] use again ");
            posxy(28,15); printf("[2] go to main menu");
            posxy(28,16); printf("[0] go to exit");
            posxy(28,18); printf("Please select : ");
            scanf("%d",&main_exit);
            if(main_exit==1){
               system("cls");edit();
            }
            else if(main_exit==2){
               system("cls");menu();
            }
            else if(main_exit==0){
               system("cls");close();
            }
            else{
               posxy(28,19); printf("Invalid!\a");
               Sleep(1500);
               system("cls");
               goto edit_invalid_3;
            }
        }
}

void erase(void)
{
    FILE *old,*newrec;
    int test=0;
    char pass_erase[10],password_erase[10]="1234";
    posxy(26,2); printf("|----------------------------------------------------------------------|");
    posxy(26,3); printf("|----------------------------------------------------------------------|");
    posxy(26,4); printf("|                               Erase List                             |"); Sleep(200);
    posxy(26,5); printf("|----------------------------------------------------------------------|");
    posxy(26,6); printf("|----------------------------------------------------------------------|");
    posxy(28,8); printf("Enter the password to erase list : ");
    scanf("%s",pass_erase);
     if(strcmp(pass_erase,password_erase)==0)
     {
       posxy(28,9); printf("Password Match!");
       posxy(28,11); printf("loading :");
       posxy(28,12); printf("please wait :");
       for(load=0;load<=55;load+=1)
       {
        printf("_", load);Sleep(20);
       }
       Sleep(800);
       system("cls");
       goto erase_ses;
     }
     else
     {
        posxy(28,9); printf("Wrong password!\a");
        erase_invalid_1:
        posxy(28,11); printf("[1] try again ");
        posxy(28,12); printf("[2] go to main menu");
        posxy(28,13); printf("[0] go to exit");
        posxy(28,15); printf("Please select : ");
        scanf("%d",&main_exit);
        if(main_exit==1){
           system("cls");erase();
        }
        else if(main_exit==2){
           system("cls");menu();
        }
        else if(main_exit==0){
           system("cls");close();
        }
        else{
           posxy(28,16); printf("Invalid!\a");
           Sleep(1000);
           system("cls");
           goto erase_invalid_1;
        }
     }
    erase_ses:
    old=fopen("recordlist.dat","r");
    newrec=fopen("newlist.dat","w");
    posxy(26,2); printf("|----------------------------------------------------------------------|");
    posxy(26,3); printf("|----------------------------------------------------------------------|");
    posxy(26,4); printf("|                               Erase List                             |"); Sleep(200);
    posxy(26,5); printf("|----------------------------------------------------------------------|");
    posxy(26,6); printf("|----------------------------------------------------------------------|");
    posxy(28,8); printf("Enter the account no. For customer you want to delete : ");
    scanf("%d",&rem.acc_no);
   while (fscanf(old,"%d %s %s %lf %d %d/%d/%d",&add.acc_no,add.name,add.address,&add.phone,&add.amount,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
   {
     if(add.acc_no!=rem.acc_no)
        fprintf(newrec,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);
     else{
        test++;
     }
   }
   fclose(old);
   fclose(newrec);
   remove("recordlist.dat");
   rename("newlist.dat","recordlist.dat");
   if(test==0)
   {
     system("cls");
     posxy(26,2); printf("|----------------------------------------------------------------------|");
     posxy(26,3); printf("|----------------------------------------------------------------------|");
     posxy(26,4); printf("|                         Record not found!!\a\a\a                     |");
     posxy(26,5); printf("|----------------------------------------------------------------------|");
     posxy(26,6); printf("|----------------------------------------------------------------------|");
     erase_invalid_2:
     posxy(28,8); printf("[1] try again ");
     posxy(28,9); printf("[2] go to main menu");
     posxy(28,10); printf("[0] go to exit");
     posxy(28,12); printf("Please select : ");
     scanf("%d",&main_exit);
     if(main_exit==1){
        system("cls");erase();
     }
     else if(main_exit==2){
        system("cls");menu();
     }
     else if(main_exit==0){
        system("cls");close();
     }
     else{
        posxy(28,13); printf("Invalid!\a");
        Sleep(1500);
        system("cls");
        goto erase_invalid_2;
     }
   }
   else
   {
     posxy(26,10); printf("|----------------------------------------------------------------------|");
     posxy(26,11); printf("|                        list deleted successfully!                    |");
     posxy(26,12); printf("|----------------------------------------------------------------------|");
     erase_invalid_3:
     posxy(28,14); printf("[1] use again ");
     posxy(28,15); printf("[2] go to main menu");
     posxy(28,16); printf("[0] go to exit");
     posxy(28,18); printf("Please select : ");
     scanf("%d",&main_exit);
     if(main_exit==1){
        system("cls");erase();
     }
     else if(main_exit==2){
        system("cls");menu();
     }
     else if(main_exit==0){
        system("cls");close();
     }
     else{
        posxy(28,19); printf("Invalid!\a");
        Sleep(1500);
        system("cls");
        goto erase_invalid_3;
     }
   }
}

void Fbmenu()
{
     posxy(30,0);  printf("| ------------------------------------------------------------------------ |");
     posxy(30,1);  printf("| ------------------------------------------------------------------------ |");
     posxy(30,2);  printf("|  88        88                                888888                      |"); Sleep(100);
     posxy(30,3);  printf("|  8888    8888                                88   88                     |"); Sleep(100);
     posxy(30,4);  printf("|  88 88  88 88                                88    88                    |"); Sleep(100);
     posxy(30,5);  printf("|  88  8888  88                                88   88                     |"); Sleep(100);
     posxy(30,6);  printf("|  88   88   88   8888888  88    888 88     88 888888    88888     88  88  |"); Sleep(100);
     posxy(30,7);  printf("|  88        88  88     88 88   8888 88     88 88   88  88   88    88 88   |"); Sleep(100);
     posxy(30,8);  printf("|  88        88  888888888 88  88 88 88     88 88    88 88   888   888     |"); Sleep(100);
     posxy(30,9);  printf("|  88        88  88        88 88  88 88     88 88   88  88  88 88  88      |"); Sleep(100);
     posxy(30,10); printf("|  88        88   8888888  888    88  8888888  888888    8888   88 88      |"); Sleep(100);
     posxy(30,11); printf("| ------------------------------------------------------------------------ |");
     posxy(30,12); printf("| ------------------------------------------------------------------------ |");
     posxy(30,13); printf("| |                                Menu Bar                              | |");
     posxy(30,14); printf("| ------------------------------------------------------------------------ |");
     posxy(30,15); printf("|                                                                          |");
     posxy(30,16); printf("| [1] chicken Bucket_pack     (S)          130 Baht                        |");
     posxy(30,17); printf("|                             (M)          250 Baht                        |");
     posxy(30,18); printf("|                             (L)          410 Baht                        |");
     posxy(30,19); printf("|                                                                          |");
     posxy(30,20); printf("| [2] chicken jeed'zeed_pack                90 Baht                        |");
     posxy(30,21); printf("|                                                                          |");
     posxy(30,22); printf("| [3] cheese burger_bacon                  110 baht                        |");
     posxy(30,23); printf("|                                                                          |");
     posxy(30,24); printf("| [4] French Fries            (S)           25 Baht                        |");
     posxy(30,25); printf("|                             (M)           50 Baht                        |");
     posxy(30,26); printf("|                             (L)           75 Baht                        |");
     posxy(30,27); printf("|                                                                          |");
     posxy(30,28); printf("| [5] Fried chicken_pack                   150 baht                        |");
     posxy(30,29); printf("|                                                                          |");
     posxy(30,30); printf("| [6] Beverage              (water)         10 baht                        |");
     posxy(30,31); printf("|                           (ice)            5 baht                        |");
     posxy(30,32); printf("|                           (coke)          20 baht                        |");
     posxy(30,33); printf("|                                                                          |");
     posxy(30,34); printf("| ------------------------------------------------------------------------ |");
     posxy(30,35); printf("| |                              PROMOTION!!                             | |");
     posxy(30,36); printf("| ------------------------------------------------------------------------ |");
     posxy(30,37); printf("|  - chicken jeed'zeed_pack + cheese burger_bacon sale -10%                |");
     posxy(30,38); printf("|                                                                          |");
     posxy(30,39); printf("|  - chicken Bucket_pack (L) + Fried chicken_pack sale -15%                |");
     posxy(30,40); printf("| ------------------------------------------------------------------------ |");
     posxy(30,41); printf("| ------------------------------------------------------------------------ |");
     posxy(32,43); printf("[1] go to main menu");
     posxy(32,44); printf("[0] go to exit");
     posxy(32,46); printf("Please select : ");
     scanf("%d",&main_exit);
     if(main_exit==1){
        system("cls");menu();
     }
     else if(main_exit==0){
        system("cls");close();
     }
     else{
        posxy(32,47); printf("Invalid!\a");
        Sleep(1500);
        system("cls");
        Fbmenu();
     }
}

void Fb()
{
     posxy(26,2);  printf("| ------------------------------------------------------------------------ |");
     posxy(26,3);  printf("| |                                Menu Bar                              | |");
     posxy(26,4);  printf("| ------------------------------------------------------------------------ |");
     posxy(26,5);  printf("|                                                                          |");
     posxy(26,6);  printf("| [1] chicken Bucket_pack     (S)          130 Baht                        |");
     posxy(26,7);  printf("|                             (M)          250 Baht                        |");
     posxy(26,8);  printf("|                             (L)          410 Baht                        |");
     posxy(26,9);  printf("|                                                                          |");
     posxy(26,10); printf("| [2] chicken jeed'zeed_pack                90 Baht                        |");
     posxy(26,11); printf("|                                                                          |");
     posxy(26,12); printf("| [3] cheese burger_bacon                  110 baht                        |");
     posxy(26,13); printf("|                                                                          |");
     posxy(26,14); printf("| [4] French Fries            (S)           25 Baht                        |");
     posxy(26,15); printf("|                             (M)           50 Baht                        |");
     posxy(26,16); printf("|                             (L)           75 Baht                        |");
     posxy(26,17); printf("|                                                                          |");
     posxy(26,18); printf("| [5] Fried chicken_pack                   150 baht                        |");
     posxy(26,19); printf("|                                                                          |");
     posxy(26,20); printf("| [6] Beverage              (water)         10 baht                        |");
     posxy(26,21); printf("|                           (ice)            5 baht                        |");
     posxy(26,22); printf("|                           (coke)          20 baht                        |");
     posxy(26,23); printf("|                                                                          |");
     posxy(26,24); printf("| ------------------------------------------------------------------------ |");
     posxy(26,25); printf("| |                              PROMOTION!!                             | |");
     posxy(26,26); printf("| ------------------------------------------------------------------------ |");
     posxy(26,27); printf("|  - chicken jeed'zeed_pack + cheese burger_bacon sale -10%                |");
     posxy(26,28); printf("|                                                                          |");
     posxy(26,29); printf("|  - chicken Bucket_pack (L) + Fried chicken_pack sale -15%                |");
     posxy(26,30); printf("| ------------------------------------------------------------------------ |");
}

void paymenu()
{
     int choice;
     posxy(26,2);  printf("| ------------------------------------------------------------------------ |");
     posxy(26,3);  printf("| |                                Menu Bar                              | |");
     posxy(26,4);  printf("| ------------------------------------------------------------------------ |");
     posxy(26,5);  printf("|                                                                          |");
     posxy(26,6);  printf("| [1] chicken Bucket_pack     (S)          130 Baht                        |");
     posxy(26,7);  printf("|                             (M)          250 Baht                        |");
     posxy(26,8);  printf("|                             (L)          410 Baht                        |");
     posxy(26,9);  printf("|                                                                          |");
     posxy(26,10); printf("| [2] chicken jeed'zeed_pack                90 Baht                        |");
     posxy(26,11); printf("|                                                                          |");
     posxy(26,12); printf("| [3] cheese burger_bacon                  110 baht                        |");
     posxy(26,13); printf("|                                                                          |");
     posxy(26,14); printf("| [4] French Fries            (S)           25 Baht                        |");
     posxy(26,15); printf("|                             (M)           50 Baht                        |");
     posxy(26,16); printf("|                             (L)           75 Baht                        |");
     posxy(26,17); printf("|                                                                          |");
     posxy(26,18); printf("| [5] Fried chicken_pack                   150 baht                        |");
     posxy(26,19); printf("|                                                                          |");
     posxy(26,20); printf("| [6] Beverage              (water)         10 baht                        |");
     posxy(26,21); printf("|                           (ice)            5 baht                        |");
     posxy(26,22); printf("|                           (coke)          20 baht                        |");
     posxy(26,23); printf("|                                                                          |");
     posxy(26,24); printf("| ------------------------------------------------------------------------ |");
     posxy(26,25); printf("| |                              PROMOTION!!                             | |");
     posxy(26,26); printf("| ------------------------------------------------------------------------ |");
     posxy(26,27); printf("|  - chicken jeed'zeed_pack + cheese burger_bacon sale -10%                |");
     posxy(26,28); printf("|                                                                          |");
     posxy(26,29); printf("|  - chicken Bucket_pack (L) + Fried chicken_pack sale -15%                |");
     posxy(26,30); printf("| ------------------------------------------------------------------------ |");
     posxy(28,32); printf("please select : ");
     scanf("%d",&choice);
     switch(choice){
        case 1:CBP();
        break;
        case 2: CJZP();
        break;
        case 3: CBB();
        break;
        case 4: FF();
        break;
        case 5: FCP();
        break;
        case 6: BR();
        break;
        default :
        posxy(28,33); printf("Invalid!\a");
        Sleep(1500);
        system("cls");
        main();
     }
}

void CBP()
{
        FILE *ptr;
        ptr=fopen("recordlist.dat","a+");
        posxy(28,33); printf("chicken Bucket_pack [1]S / [2]M / [3]L");
        posxy(28,34); printf("Choose your size:");
        scanf("%d",&n);
        switch(n){
           case 1:
            l=l+130;
            posxy(28,35);printf("How many do you want : ");
            scanf("%d",&p);
            l=l*p;
            posxy(28,37); printf("[1]Pay [2]add more food : ");
            scanf("%d",&n1);
            if(n1==1){
              posxy(28,38); printf("You have to pay: %d bath",l);
              posxy(28,39); printf("Pay: ");
              scanf("%d",&b);
              c=b-l;
              posxy(28,41); printf("get change: %d bath\n",c);
              add.amount=b;

              fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

              fclose(ptr);
              CBP_1:
              posxy(28,43);printf("[1]use again / [2]go to main menu / [0]go to exit");
              posxy(28,44);printf(" Please select : ");
              scanf("%d",&main_exit);
              if (main_exit==1){
              system("cls");paymenu();
              }
              else if(main_exit==2){
              system("cls");menu();
              }
              else if(main_exit==0){
              system("cls");close();
              }
              else{
              printf("\n\tInvalid!\a");
              Sleep(1500);
              system("cls");
              goto CBP_1;
              }
           }
           else if(n1==2){
              posxy(28,38); printf("please select : ");
              scanf("%d",&n2);
              if(n2==1){
                 system("cls");
                 Fb();
                 CBP();
              }
              else if(n2==2){
                 system("cls");
                 Fb();
                 CJZP();
              }
              else if(n2==3){
                 system("cls");
                 Fb();
                 CBB();
              }
              else if(n2==4){
                 system("cls");
                 Fb();
                 FF();
              }
              else if(n2==5){
                 system("cls");
                 Fb();
                 FCP();
              }
              else if(n2==6){
                 system("cls");
                 Fb();
                 BR();
              }
              else{
                 posxy(28,39); printf("Invalid!\a");
                 Sleep(1500);
                 system("cls");
                 main();
              }
           }
           else{
             posxy(28,38); printf("Invalid!\a");
             Sleep(1500);
             system("cls");
             main();
           }
           break;
           case 2:
            l=l+250;
            posxy(28,35);printf("How many do you want : ");
            scanf("%d",&p);
            l=l*p;
            posxy(28,37); printf("[1]Pay [2]add more food : ");
            scanf("%d",&n1);
            if(n1==1){
              posxy(28,38); printf("You have to pay: %d bath",l);
              posxy(28,39); printf("Pay: ");
              scanf("%d",&b);
              c=b-l;
              posxy(28,41); printf("get change: %d bath",c);
              add.amount=b;

              fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

              fclose(ptr);
              CBP_2:
              posxy(28,43);printf("[1]use again / [2]go to main menu / [0]go to exit");
              posxy(28,44);printf(" Please select : ");
              scanf("%d",&main_exit);
              if (main_exit==1){
              system("cls");paymenu();
              }
              else if(main_exit==2){
              system("cls");menu();
              }
              else if(main_exit==0){
              system("cls");close();
              }
              else{
              printf("\n\tInvalid!\a");
              Sleep(1500);
              system("cls");
              goto CBP_2;
              }
            }
           else if(n1==2){
              posxy(28,38); printf("please select : ");
              scanf("%d",&n2);
              if(n2==1){
                 system("cls");
                 Fb();
                 CBP();
              }
              else if(n2==2){
                 system("cls");
                 Fb();
                 CJZP();
              }
              else if(n2==3){
                 system("cls");
                 Fb();
                 CBB();
              }
              else if(n2==4){
                 system("cls");
                 Fb();
                 FF();
              }
              else if(n2==5){
                 system("cls");
                 Fb();
                 FCP();
              }
              else if(n2==6){
                 system("cls");
                 Fb();
                 BR();
              }
              else{
                 posxy(28,39); printf("Invalid!\a");
                 Sleep(1500);
                 system("cls");
                 main();
              }
           }
           else{
             posxy(28,38); printf("Invalid!\a");
             Sleep(1500);
             system("cls");
             main();
           }
           break;
           case 3:
            l=l+410;
            posxy(28,35);printf("How many do you want : ");
            scanf("%d",&p);
            l=l*p;
            posxy(28,37); printf("[1]Pay [2]add more food : ");
            scanf("%d",&n1);
            if(n1==1){
              posxy(28,38); printf("You have to pay: %d bath",l);
              posxy(28,39); printf("Pay: ");
              scanf("%d",&b);
              c=b-l;
              posxy(28,41); printf("get change: %d bath\n",c);
              add.amount=b;

              fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

              fclose(ptr);
              CBP_3:
              posxy(28,43);printf("[1]use again / [2]go to main menu / [0]go to exit");
              posxy(28,44);printf(" Please select : ");
              scanf("%d",&main_exit);
              if (main_exit==1){
              system("cls");paymenu();
              }
              else if(main_exit==2){
              system("cls");menu();
              }
              else if(main_exit==0){
              system("cls");close();
              }
              else{
              printf("\n\tInvalid!\a");
              Sleep(1500);
              system("cls");
              goto CBP_3;
              }
            }
            else if(n1==2){
              posxy(28,38); printf("please select : ");
              scanf("%d",&n2);
              if(n2==1){
                 system("cls");
                 Fb();
                 CBP();
              }
              else if(n2==2){
                 system("cls");
                 Fb();
                 CJZP();
              }
              else if(n2==3){
                 system("cls");
                 Fb();
                 CBB();
              }
              else if(n2==4){
                 system("cls");
                 Fb();
                 FF();
              }
              else if(n2==5){
                 system("cls");
                 Fb();
                 FCP();
              }
              else if(n2==6){
                 system("cls");
                 Fb();
                 BR();
              }
              else{
                 posxy(28,39); printf("Invalid!\a");
                 Sleep(1500);
                 system("cls");
                 main();
              }
            }
            else{
             posxy(28,38); printf("Invalid!\a");
             Sleep(1500);
             system("cls");
             main();
            }
           break;
           default :
            posxy(28,33); printf("Invalid!\a");
            Sleep(1500);
            system("cls");
            main();
        }
}

void CJZP()
{
        FILE *ptr;
        ptr=fopen("recordlist.dat","a+");
            l=l+90;
            posxy(28,33);printf("How many do you want : ");
            scanf("%d",&p);
            l=l*p;
            posxy(28,35); printf("[1]Pay [2]add more food : ");
            scanf("%d",&n1);
            if(n1==1){
              posxy(28,36); printf("You have to pay: %d bath",l);
              posxy(28,37); printf("Pay: ");
              scanf("%d",&b);
              c=b-l;
              posxy(28,39); printf("get change: %d bath\n",c);
              add.amount=b;

              fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

              fclose(ptr);
              CJZPl:
              posxy(28,41);printf("[1]use again / [2]go to main menu / [0]go to exit");
              posxy(28,42);printf(" Please select : ");
              scanf("%d",&main_exit);
              if (main_exit==1){
              system("cls");paymenu();
              }
              else if(main_exit==2){
              system("cls");menu();
              }
              else if(main_exit==0){
              system("cls");close();
              }
              else{
              printf("\n\tInvalid!\a");
              Sleep(1500);
              system("cls");
              goto CJZPl;
              }
           }
           else if(n1==2){
              posxy(28,36); printf("please select : ");
              scanf("%d",&n2);
              if(n2==1){
                 system("cls");
                 Fb();
                 CBP();
              }
              else if(n2==2){
                 system("cls");
                 Fb();
                 CJZP();
              }
              else if(n2==3){
                 system("cls");
                 Fb();
                 CBB();
              }
              else if(n2==4){
                 system("cls");
                 Fb();
                 FF();
              }
              else if(n2==5){
                 system("cls");
                 Fb();
                 FCP();
              }
              else if(n2==6){
                 system("cls");
                 Fb();
                 BR();
              }
              else{
                 posxy(28,37); printf("Invalid!\a");
                 Sleep(1500);
                 system("cls");
                 main();
              }
           }
           else{
             posxy(28,36); printf("Invalid!\a");
             Sleep(1500);
             system("cls");
             main();
           }
}

void CBB()
{
        FILE *ptr;
        ptr=fopen("recordlist.dat","a+");
            l=l+110;
            posxy(28,33);printf("How many do you want : ");
            scanf("%d",&p);
            l=l*p;
            posxy(28,35); printf("[1]Pay [2]add more food : ");
            scanf("%d",&n1);
            if(n1==1){
              posxy(28,36); printf("You have to pay: %d bath",l);
              posxy(28,37); printf("Pay: ");
              scanf("%d",&b);
              c=b-l;
              posxy(28,39); printf("get change: %d bath\n",c);
              add.amount=b;

              fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

              fclose(ptr);
              CBBl:
              posxy(28,41);printf("[1]use again / [2]go to main menu / [0]go to exit");
              posxy(28,42);printf(" Please select : ");
              scanf("%d",&main_exit);
              if (main_exit==1){
              system("cls");paymenu();
              }
              else if(main_exit==2){
              system("cls");menu();
              }
              else if(main_exit==0){
              system("cls");close();
              }
              else{
              posxy(28,43);printf("\n\tInvalid!\a");
              Sleep(1500);
              system("cls");
              goto CBBl;
              }
           }
           else if(n1==2){
              posxy(28,36); printf("please select : ");
              scanf("%d",&n2);
              if(n2==1){
                 system("cls");
                 Fb();
                 CBP();
              }
              else if(n2==2){
                 system("cls");
                 Fb();
                 CJZP();
              }
              else if(n2==3){
                 system("cls");
                 Fb();
                 CBB();
              }
              else if(n2==4){
                 system("cls");
                 Fb();
                 FF();
              }
              else if(n2==5){
                 system("cls");
                 Fb();
                 FCP();
              }
              else if(n2==6){
                 system("cls");
                 Fb();
                 BR();
              }
              else{
                 posxy(28,39); printf("Invalid!\a");
                 Sleep(1500);
                 system("cls");
                 main();
              }
           }
           else{
             posxy(28,36); printf("Invalid!\a");
             Sleep(1500);
             system("cls");
             main();
           }
}

void FF(void)
{
        FILE *ptr;
        ptr=fopen("recordlist.dat","a+");
        posxy(28,33); printf("French Fries [1]S / [2]M / [3]L");
        posxy(28,34); printf("Choose your size:");
        scanf("%d",&n);
        switch(n){
           case 1:
            l=l+25;
            posxy(28,35);printf("How many do you want : ");
            scanf("%d",&p);
            l=l*p;
            posxy(28,37); printf("[1]Pay [2]add more food : ");
            scanf("%d",&n1);
            if(n1==1){
              posxy(28,38); printf("You have to pay: %d bath",l);
              posxy(28,39); printf("Pay: ");
              scanf("%d",&b);
              c=b-l;
              posxy(28,41); printf("get change: %d bath\n",c);
              add.amount=b;

              fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

              fclose(ptr);
              FF_1:
              posxy(28,43);printf("[1]use again / [2]go to main menu / [0]go to exit");
              posxy(28,44);printf(" Please select : ");
              scanf("%d",&main_exit);
              if (main_exit==1){
              system("cls");paymenu();
              }
              else if(main_exit==2){
              system("cls");menu();
              }
              else if(main_exit==0){
              system("cls");close();
              }
              else{
              posxy(28,45); printf("\n\tInvalid!\a");
              Sleep(1500);
              system("cls");
              goto FF_1;
              }
            }
           else if(n1==2){
              posxy(28,38); printf("please select : ");
              scanf("%d",&n2);
              if(n2==1){
                 system("cls");
                 Fb();
                 CBP();
              }
              else if(n2==2){
                 system("cls");
                 Fb();
                 CJZP();
              }
              else if(n2==3){
                 system("cls");
                 Fb();
                 CBB();
              }
              else if(n2==4){
                 system("cls");
                 Fb();
                 FF();
              }
              else if(n2==5){
                 system("cls");
                 Fb();
                 FCP();
              }
              else if(n2==6){
                 system("cls");
                 Fb();
                 BR();
              }
              else{
                 posxy(28,39); printf("Invalid!\a");
                 Sleep(1500);
                 system("cls");
                 main();
              }
           }
           else{
             posxy(28,38); printf("Invalid!\a");
             Sleep(1500);
             system("cls");
             main();
           }
           break;
           case 2:
            l=l+50;
            posxy(28,35);printf("How many do you want : ");
            scanf("%d",&p);
            l=l*p;
            posxy(28,37); printf("[1]Pay [2]add more food : ");
            scanf("%d",&n1);
            if(n1==1){
              posxy(28,38); printf("You have to pay: %d bath",l);
              posxy(28,39); printf("Pay: ");
              scanf("%d",&b);
              c=b-l;
              posxy(28,41); printf("get change: %d bath\n",c);
              add.amount=b;

              fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

              fclose(ptr);
              FF_2:
              posxy(28,43);printf("[1]use again / [2]go to main menu / [0]go to exit");
              posxy(28,44);printf(" Please select : ");
              scanf("%d",&main_exit);
              if (main_exit==1){
              system("cls");paymenu();
              }
              else if(main_exit==2){
              system("cls");menu();
              }
              else if(main_exit==0){
              system("cls");close();
              }
              else{
              posxy(28,45); printf("\n\tInvalid!\a");
              Sleep(1500);
              system("cls");
              goto FF_2;
              }
            }
           else if(n1==2){
              posxy(28,38); printf("please select : ");
              scanf("%d",&n2);
              if(n2==1){
                 system("cls");
                 Fb();
                 CBP();
              }
              else if(n2==2){
                 system("cls");
                 Fb();
                 CJZP();
              }
              else if(n2==3){
                 system("cls");
                 Fb();
                 CBB();
              }
              else if(n2==4){
                 system("cls");
                 Fb();
                 FF();
              }
              else if(n2==5){
                 system("cls");
                 Fb();
                 FCP();
              }
              else if(n2==6){
                 system("cls");
                 Fb();
                 BR();
              }
              else{
                 posxy(28,39); printf("Invalid!\a");
                 Sleep(1500);
                 system("cls");
                 main();
              }
           }
           else{
             posxy(28,38); printf("Invalid!\a");
             Sleep(1500);
             system("cls");
             main();
           }
           break;
           case 3:
            l=l+75;
            posxy(28,35);printf("How many do you want : ");
            scanf("%d",&p);
            l=l*p;
            posxy(28,37); printf("[1]Pay [2]add more food : ");
            scanf("%d",&n1);
            if(n1==1){
              posxy(28,38); printf("You have to pay: %d bath",l);
              posxy(28,39); printf("Pay: ");
              scanf("%d",&b);
              c=b-l;
              posxy(28,41); printf("get change: %d bath\n",c);
              add.amount=b;

              fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

              fclose(ptr);
              FF_3:
              posxy(28,43);printf("[1]use again / [2]go to main menu / [0]go to exit");
              posxy(28,44);printf(" Please select : ");
              scanf("%d",&main_exit);
              if (main_exit==1){
              system("cls");paymenu();
              }
              else if(main_exit==2){
              system("cls");menu();
              }
              else if(main_exit==0){
              system("cls");close();
              }
              else{
              posxy(28,45); printf("\n\tInvalid!\a");
              Sleep(1500);
              system("cls");
              goto FF_3;
              }
            }
           else if(n1==2){
              posxy(28,38); printf("please select : ");
              scanf("%d",&n2);
              if(n2==1){
                 system("cls");
                 Fb();
                 CBP();
              }
              else if(n2==2){
                 system("cls");
                 Fb();
                 CJZP();
              }
              else if(n2==3){
                 system("cls");
                 Fb();
                 CBB();
              }
              else if(n2==4){
                 system("cls");
                 Fb();
                 FF();
              }
              else if(n2==5){
                 system("cls");
                 Fb();
                 FCP();
              }
              else if(n2==6){
                 system("cls");
                 Fb();
                 BR();
              }
              else{
                 posxy(28,39); printf("Invalid!\a");
                 Sleep(1500);
                 system("cls");
                 main();
              }
           }
           else{
             posxy(28,38); printf("Invalid!\a");
             Sleep(1500);
             system("cls");
             main();
           }
           break;
           default :
            posxy(28,35); printf("Invalid!\a");
            Sleep(1500);
            system("cls");
            main();
        }
}

void FCP(void)
{
        FILE *ptr;
        ptr=fopen("recordlist.dat","a+");
            l=l+150;
            posxy(28,33);printf("How many do you want : ");
            scanf("%d",&p);
            l=l*p;
            posxy(28,35); printf("[1]Pay [2]add more food : ");
            scanf("%d",&n1);
            if(n1==1){
              posxy(28,36); printf("You have to pay: %d bath",l);
              posxy(28,37); printf("Pay: ");
              scanf("%d",&b);
              c=b-l;
              posxy(28,39); printf("get change: %d bath\n",c);
              add.amount=b;

              fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

              fclose(ptr);
              FCPl:
              posxy(28,41);printf("[1]use again / [2]go to main menu / [0]go to exit");
              posxy(28,42);printf(" Please select : ");
              scanf("%d",&main_exit);
              if (main_exit==1){
              system("cls");paymenu();
              }
              else if(main_exit==2){
              system("cls");menu();
              }
              else if(main_exit==0){
              system("cls");close();
              }
              else{
              posxy(28,43);printf("\n\tInvalid!\a");
              Sleep(1500);
              system("cls");
              goto FCPl;
              }
           }
           else if(n1==2){
              posxy(28,36); printf("please select : ");
              scanf("%d",&n2);
              if(n2==1){
                 system("cls");
                 Fb();
                 CBP();
              }
              else if(n2==2){
                 system("cls");
                 Fb();
                 CJZP();
              }
              else if(n2==3){
                 system("cls");
                 Fb();
                 CBB();
              }
              else if(n2==4){
                 system("cls");
                 Fb();
                 FF();
              }
              else if(n2==5){
                 system("cls");
                 Fb();
                 FCP();
              }
              else if(n2==6){
                 system("cls");
                 Fb();
                 BR();
              }
              else{
                 posxy(28,37); printf("Invalid!\a");
                 Sleep(1500);
                 system("cls");
                 main();
              }
           }
           else{
             posxy(28,36); printf("Invalid!\a");
             Sleep(1500);
             system("cls");
             main();
           }
}

void BR()
{
        FILE *ptr;
        ptr=fopen("recordlist.dat","a+");
        posxy(28,33); printf("Beverage [1]Water / [2]Ice / [3]Coke");
        posxy(28,34); printf("please select : ");
        scanf("%d",&n);
        switch(n){
           case 1:
            l=l+10;
            posxy(28,35);printf("How many do you want : ");
            scanf("%d",&p);
            l=l*p;
            posxy(28,37); printf("[1]Pay [2]add more food : ");
            scanf("%d",&n1);
            if(n1==1){
              posxy(28,38); printf("You have to pay: %d bath",l);
              posxy(28,39); printf("Pay: ");
              scanf("%d",&b);
              c=b-l;
              posxy(28,41); printf("get change: %d bath\n",c);
              add.amount=b;

              fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

              fclose(ptr);
              BR_1:
              posxy(28,43);printf("[1]use again / [2]go to main menu / [0]go to exit");
              posxy(28,44);printf(" Please select : ");
              scanf("%d",&main_exit);
              if (main_exit==1){
              system("cls");paymenu();
              }
              else if(main_exit==2){
              system("cls");menu();
              }
              else if(main_exit==0){
              system("cls");close();
              }
              else{
              posxy(28,45);printf("\n\tInvalid!\a");
              Sleep(1500);
              system("cls");
              goto BR_1;
              }
            }
           else if(n1==2){
              posxy(28,38); printf("please select : ");
              scanf("%d",&n2);
              if(n2==1){
                 system("cls");
                 Fb();
                 CBP();
              }
              else if(n2==2){
                 system("cls");
                 Fb();
                 CJZP();
              }
              else if(n2==3){
                 system("cls");
                 Fb();
                 CBB();
              }
              else if(n2==4){
                 system("cls");
                 Fb();
                 FF();
              }
              else if(n2==5){
                 system("cls");
                 Fb();
                 FCP();
              }
              else if(n2==6){
                 system("cls");
                 Fb();
                 BR();
              }
              else{
                 posxy(28,39); printf("Invalid!\a");
                 Sleep(1500);
                 system("cls");
                 main();
              }
           }
           break;
           case 2:
            l=l+5;
            posxy(28,35);printf("How many do you want : ");
            scanf("%d",&p);
            l=l*p;
            posxy(28,37); printf("[1]Pay [2]add more food : ");
            scanf("%d",&n1);
            if(n1==1){
              posxy(28,38); printf("You have to pay: %d bath",l);
              posxy(28,39); printf("Pay: ");
              scanf("%d",&b);
              c=b-l;
              posxy(28,41); printf("get change: %d bath",c);
              add.amount=b;

              fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

              fclose(ptr);
              BR_2:
              posxy(28,43);printf("[1]use again / [2]go to main menu / [0]go to exit");
              posxy(28,44);printf(" Please select : ");
              scanf("%d",&main_exit);
              if (main_exit==1){
              system("cls");paymenu();
              }
              else if(main_exit==2){
              system("cls");menu();
              }
              else if(main_exit==0){
              system("cls");close();
              }
              else{
              posxy(28,45);printf("\n\tInvalid!\a");
              Sleep(1500);
              system("cls");
              goto BR_2;
              }
            }
           else if(n1==2){
              posxy(28,38); printf("please select : ");
              scanf("%d",&n2);
              if(n2==1){
                 system("cls");
                 Fb();
                 CBP();
              }
              else if(n2==2){
                 system("cls");
                 Fb();
                 CJZP();
              }
              else if(n2==3){
                 system("cls");
                 Fb();
                 CBB();
              }
              else if(n2==4){
                 system("cls");
                 Fb();
                 FF();
              }
              else if(n2==5){
                 system("cls");
                 Fb();
                 FCP();
              }
              else if(n2==6){
                 system("cls");
                 Fb();
                 BR();
              }
              else{
                 posxy(28,39); printf("Invalid!\a");
                 Sleep(1500);
                 system("cls");
                 main();
              }
           }
           break;
           case 3:
            l=l+20;
            posxy(28,35);printf("How many do you want : ");
            scanf("%d",&p);
            l=l*p;
            posxy(28,37); printf("[1]Pay [2]add more food : ");
            scanf("%d",&n1);
            if(n1==1){
              posxy(28,38); printf("You have to pay: %d bath",l);
              posxy(28,39); printf("Pay: ");
              scanf("%d",&b);
              c=b-l;
              posxy(28,41); printf("get change: %d bath\n",c);
              add.amount=b;

              fprintf(ptr,"%d %s %s %lf %d %d/%d/%d\n",add.acc_no,add.name,add.address,add.phone,add.amount,add.deposit.month,add.deposit.day,add.deposit.year);

              fclose(ptr);
              BR_3:
              posxy(28,43);printf("[1]use again / [2]go to main menu / [0]go to exit");
              posxy(28,44);printf(" Please select : ");
              scanf("%d",&main_exit);
              if (main_exit==1){
              system("cls");paymenu();
              }
              else if(main_exit==2){
              system("cls");menu();
              }
              else if(main_exit==0){
              system("cls");close();
              }
              else{
              posxy(28,45);printf("\n\tInvalid!\a");
              Sleep(1500);
              system("cls");
              goto BR_3;
              }
            }
           else if(n1==2){
              posxy(28,38); printf("please select : ");
              scanf("%d",&n2);
              if(n2==1){
                 system("cls");
                 Fb();
                 CBP();
              }
              else if(n2==2){
                 system("cls");
                 Fb();
                 CJZP();
              }
              else if(n2==3){
                 system("cls");
                 Fb();
                 CBB();
              }
              else if(n2==4){
                 system("cls");
                 Fb();
                 FF();
              }
              else if(n2==5){
                 system("cls");
                 Fb();
                 FCP();
              }
              else if(n2==6){
                 system("cls");
                 Fb();
                 BR();
              }
              else{
                 posxy(28,39); printf("Invalid!\a");
                 Sleep(1500);
                 system("cls");
                 main();
              }
           }
           else{
             posxy(28,38); printf("Invalid!\a");
             Sleep(1500);
             system("cls");
             main();
           }
           break;
           default :
            posxy(28,35); printf("Invalid!\a");
            Sleep(1500);
            system("cls");
            main();
        }
}

//End
