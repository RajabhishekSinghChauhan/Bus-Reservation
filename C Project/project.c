#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX 256
void displaychoice();
void login();
void create();
void book();
void displaychoice2();
void view_buses()
{
	printf("Im inside a function\n");
}
void print_ticket()
{
	printf("Im inside a function\n");
}
void cancel()
{
	printf("Im inside a function\n");
}
void bus_status()
{
	printf("Im inside a function\n");
}
void sagar();
void lake();
void rishab();
void rrr();
void abhishek();

int main()
{
    char choice1;
    printf("             *****************BUS RESERVATION SYSTEM **********************\n\n");
    printf("             1.Login\n");
    printf("             2.Create Account\n");
    printf("             Enter your choice:");
    scanf("%c",&choice1);
    switch(choice1)
    {
	case '1':
		printf("            \nPress any key to continue...\n");
		getch();
		system("cls");
		login();
		break;
	case '2':
		create();
		break;
    }
	

    
    return 0;
}
void displaychoice()
{
 char choice;
    printf("                   *******************ENTER YOUR CHOICE**************************\n");
    printf("                         1.VIEW BUSES                                            \n");
    printf("                         2.BOOK TICKETS                                          \n");
    printf("                         3.VIEW TICKET                                          \n");
    printf("                         4.CANCEL TICKETS                                        \n");
    printf("                         5.BUS STATUS                                           \n");
	fflush(stdin);
    scanf("%c",&choice); 
	fflush(stdin);
	switch(choice) 
	{
		case '1':
		printf("            \nPress any key to continue...\n");
		getch();
			view_buses();
			break;
		case '2':
		printf("            \nPress any key to continue...\n");
		getch();
			book();
			break;
		case '3':
		printf("            \nPress any key to continue...\n");
		getch();
			print_ticket();
			break;
		case '4':
		printf("            \nPress any key to continue...\n");
		getch();
			cancel();
			break;
		case '5':
		printf("            \nPress any key to continue...\n");
		getch();
			bus_status();
			break;
	
		
	}
}

void book()
{
	
	FILE *ptr;
	ptr = fopen("project.txt","w");
	char source[56];
	char dest[56];
	char date[56];
	char firstname[56];
	char lastname[56];

	system("cls");
	printf("                    ***************** BOOKING *******************\n\n");
	printf("                    Enter your source:");
	gets(source);
	printf("                    Enter your destination:");
	gets(dest);
	printf("                    Enter the date in dd/mm/yyyy format:");
	gets(date);	
	printf("                    Enter your first name:");
	gets(firstname);
	fflush(stdin);
	printf("                    Enter your last name:");
	gets(lastname);

	
	
	

	fprintf(ptr,"%s\n",source);
	fprintf(ptr,"%s\n",dest);
	fprintf(ptr,"%s\n",date);
	fprintf(ptr,"%s\n",firstname);
	fprintf(ptr,"%s\n",lastname);

	fclose(ptr);
	printf("            \nPress any key to continue...\n");
	getch();
	

	displaychoice2(firstname);
	


}
void replace(char *names,char *fname,int num)
{

        FILE *fptr1, *fptr2;
        int lno, linectr = 0;
        char str[MAX];      
        char newln[MAX], temp[] = "temp.txt";
		fflush(stdin);
        fptr1 = fopen(fname, "r");
        if (!fptr1) 
        {
                printf("Unable to open the input file!!\n");
    
        }
		fflush(stdin);
        fptr2 = fopen(temp, "w");
        if (!fptr2) 
        {
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
            
        }
		lno = num-1;
        lno++;
         // copy all contents to the temporary file other except specific line
        while (!feof(fptr1)) 
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1)) 
            {
                linectr++;
                if (linectr != lno) 
                    {
                        fprintf(fptr2, "%s", str);
                    } 
                    else 
                    {
                        fprintf(fptr2, "%d.%s\n", lno,names);
                    }
                }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove(fname);
        rename(temp, fname);
		printf("         \n********** Your ticket has been booked **********\n");
		printf("         \n*********** Amount to be payed = 400/- **********");
		printf("            \nPress any key to continue...\n");
		getch();
		system("cls");
		displaychoice();
	



}
void sagar(char *names)
{
	FILE *ptr1;
	int choice4;
	ptr1 = fopen("sagar.txt","a+");
	char filename[55] = "sagar.txt";
	printf("***************WELCOME TO SAGAR TRAVELS*************\n\n");
	char ch1;

	do 
    {
		
        ch1 = fgetc(ptr1);
		putchar(ch1);

	

    } while(ch1 != EOF); 
	fclose(ptr1);
	printf("Please Enter the seat number you wish to book:");
	scanf("%d",&choice4);
	replace(names,filename,choice4);

}

void lake(char *names)
{
	FILE *ptr2;
	int choice5;
	ptr2 = fopen("lake.txt","a+");
	char filename[55] = "lake.txt";
	printf("***************WELCOME TO LAKE CITY TRAVELS*************\n\n");
	char ch1;

	do 
    {
		
        ch1 = fgetc(ptr2);
		putchar(ch1);
		

	

    } while(ch1 != EOF); 
	fclose(ptr2);
	printf("Please Enter the seat number you wish to book:");
	scanf("%d",&choice5);
	replace(names,filename,choice5);

}

void rishab(char *names)
{
	FILE *ptr3;
	int choice6;
	ptr3 = fopen("rishab.txt","a+");
	char filename[55] = "rishab.txt";
	printf("***************WELCOME TO RISHAB TRAVELS*************\n\n");
	char ch1;

	do 
    {
		
        ch1 = fgetc(ptr3);
		putchar(ch1);

	

    } while(ch1 != EOF); 
	fclose(ptr3);
	printf("Please Enter the seat number you wish to book:");
	scanf("%d",&choice6);
	replace(names,filename,choice6);

}

void rrr(char *names)
{
	FILE *ptr4;
	int choice7;
	ptr4 = fopen("rrr.txt","a+");
	char filename[55] = "rrr.txt";
	printf("***************WELCOME TO RRR TRAVELS*************\n\n");
	char ch1;

	do 
    {
		
        ch1 = fgetc(ptr4);
		putchar(ch1);

	

    } while(ch1 != EOF); 
	fclose(ptr4);
	printf("Please Enter the seat number you wish to book:");
	scanf("%d",&choice7);
	replace(names,filename,choice7);

}
void abhishek(char *names)
{
	FILE *ptr5;
	int choice8;
	ptr5 = fopen("abhishek.txt","a+");
	char filename[55] = "abhishek.txt";
	printf("***************WELCOME TO ABHISHEK TRAVELS*************\n\n");
	char ch1;

	do 
    {
		
        ch1 = fgetc(ptr5);
		putchar(ch1);

	

    } while(ch1 != EOF); 
	fclose(ptr5);
	printf("Please Enter the seat number you wish to book:");
	scanf("%d",&choice8);
	replace(names,filename,choice8);

}


void displaychoice2(char *names)
{
FILE *fptr;

fptr = fopen("buses.txt","r");
system("cls");
char ch;
	do 
    {
        ch = fgetc(fptr);
        putchar(ch);

    } while(ch != EOF); 
	
char choice2;
printf("\n\nEnter your choice:\n");
choice2 = getchar();
	switch(choice2)
	{
		case '1':
			sagar(names);
			break;
		case '2':
			lake(names);
			break;
		case '3':
			rishab(names);
			break;
		case '4':
			rrr(names);
			break;
		case '5':
			abhishek(names);
			break;
		default:
			printf("Please enter a valid choice\n");
	
	}
	fclose(fptr);
}

void create()
{
    FILE *ptr1;
	ptr1=fopen("create_account.txt","w");
	char user[100];
	char password[100];
	

    system("cls");
	printf("                    ***************** CREATE ACCOUNT *******************\n\n");
	printf("                    Enter your username for sign up: ");
	scanf("%s",user);

	printf("                    Enter your password for sign up: ");
	scanf("%s",password);

	fprintf(ptr1,"%s\n",user);
	fprintf(ptr1,"%s\n",password);

    fclose(ptr1);
	
	printf("                  \nYour account has been created\n");
	printf("                  \nPress any key to continue...\n");
	getch();
    system("cls");

	login();
}

void login()
{
    char user[100];
    char password[100];
    char username[100];
    char login_password[100];

    FILE *ptr2;
	ptr2 = fopen("create_account.txt","r");

    system("cls");
	printf("                    ***************** LOGIN PAGE1 *******************\n\n");
	printf("                    Enter your username for log in: ");
	scanf("%s",username);
	fflush(stdin);
	printf("                    Enter your password for log in: ");
	scanf("%s",login_password);
	fflush(stdin);
	
	/*char line[500];
	while(fgets(line,500,ptr2)!=NULL)
	{
		char *val=strtok(line,",");
		val=strtok(NULL,",");*/

    if((strcmp(user,username)==0) && (strcmp(password,login_password)==0))
	{
	printf("\n                  Login Succesful\n");
	printf("                  \nPress any key to continue...\n");
    
    getch();
	system("cls");
	displaychoice();
	}
    else
	{
	printf("\n                   Incorrect Login details\n");	
	printf("                  \nPress any key to continue...\n");
    
    getch();
	system("cls");
	login();
	}
	fclose(ptr2);
}
