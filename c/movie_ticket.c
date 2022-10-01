#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void insert_details();
void viewall();
void find();
void book_ticket();
void past_record();

struct book
{
    char date[20];
    char name[20];
    char code[20];
    int cost;
}b;

int seat=60;

//function to insert movie details starts
void insert_details(){
    FILE *fp;
    struct book b;
    printf("Enter the date: ");
    fflush(stdin);
    scanf("%s", &b.date);
    printf("Enter the movie name: ");
    fflush(stdin);
    scanf("%s", &b.name);
    printf("Enter the movie code: ");
    fflush(stdin);
    scanf("%s", &b.code);
    printf("Enter the cost: ");
    fflush(stdin);
    scanf("%d", &b.cost);

    fp = fopen("moviedetails.txt","a");
    if(fp == NULL)
	{
		printf("FIle not Found");
	}
    else{
        fprintf(fp,"--%s %s %s %d\n",b.date, b.name, b.code,b.cost);
        printf("Details saved successfully!");
    }
    printf("\n");
    fclose(fp);
}
//function to insert movie details ends


//find function starts
void find(){
    FILE *fp;
    struct book b;
    char ch[20];
    printf("Enter the movie code: ");
    scanf("%s",ch);
    fp = fopen("moviedetails.txt","r");
    if (fp == NULL){
        printf("File not Found!");
        exit(1);
    }
    else{
        while(fgetc(fp)!=EOF){
            fscanf(fp,"%s %s %s %d",&b.date,&b.name,&b.code,&b.cost);
            if (strcmp(b.code,ch)==0)
            {
                printf("\n Record Found\n");
				printf("\n\t\tCode : %s",b.code);
				printf("\n\t\tmovie name : %s",b.name);
				printf("\n\t\tDATE : %s",b.date);
				printf("\n\t\tprice of ticket : %d",b.cost);
				break;
            }
        }
    }


}
//find function ends

//function to view details starts
void view_details(){
    char ch;
    FILE *fp;
    fp = fopen("moviedetails.txt", "r");
    if(fp == NULL)
	{
		printf("File does not found !");
		exit(1);
	}
    else{
		while( ( ch = fgetc(fp) ) != EOF )
      	printf("%c",ch);
    }
    fclose(fp);
}
//function to view details ends

//function to book ticket starts
void book_ticket(){
    char nameofperson[25], phonenumber[13];
    int num_of_seats;
    struct book b;
    FILE *fp;
    FILE *ufp;
    char ch, movie_code[20];
    fp = fopen("moviedetails.txt", "r");
    if (fp == NULL)
    {
        printf("No file found!");
        exit(1);
    }
    else{
        while((ch= fgetc(fp)) !=EOF)
        printf("%c", ch);
    }
    fclose(fp);

    //now choose the movie to book
    printf("Choose the movie code(movie code is in right side of movie name)");
    printf("Your choice: ");
    scanf("%s", movie_code);
    fp = fopen("moviedetails.txt", "r");
    if (fp == NULL)
    {
        printf("Not Found!");
        exit(1);
    }
    else{
        while(fgetc(fp)!=EOF){
            fscanf(fp,"%s %s %s %d",b.date, b.name, b.code, &b.cost);
            if (strcmp(b.code,movie_code)==0)
            {
                printf("\n Record Found\n");
				printf("\n\t\tCode : %s",b.code);
				printf("\n\t\tmovie name : %s",b.name);
				printf("\n\t\tDATE : %s",b.date);
				printf("\n\t\tprice of ticket : %d",b.cost);
				break;
            }
            
        }
    }
    printf("\nEnter your name: ");
    fflush(stdin);
    scanf("%s", nameofperson);
    printf("Enter your phone number: ");
    fflush(stdin);
    scanf("%s", phonenumber);
    printf("Enter the number of seats: ");
    fflush(stdin);
    scanf("%d", &num_of_seats);

    int total_amount = num_of_seats * b.cost;

    printf("\n ***** ENJOY ****\n");
	printf("\n\t\tname : %s",nameofperson);
	printf("\n\t\tmobile Number : %d",phonenumber);
	printf("\n\t\tmovie name : %s",b.name);
	printf("\n\t\tTotal seats : %d",num_of_seats);
	printf("\n\t\tcost per ticket : %d",b.cost);
	printf("\n\t\tTotal Amount : %d",total_amount);
    

    ufp = fopen("pasttransaction.txt","a");
    if (ufp == NULL)
    {
        printf("No file Found!");
        exit(1);
    }
    else{
        fprintf(ufp,"--%s, %s, %s, %d, %d\n", nameofperson, phonenumber,b.name,num_of_seats,total_amount);
        printf("\nRecorded successfully in file\n");
    }
    printf("\n");
    fclose(ufp);
    fclose(fp);
}
//function to book ticket ends


//function to show old transactions starts
void past_record(){
    FILE *ufp;
    struct book b;
    char ch;
    ufp = fopen("pasttransaction.txt", "r");
    if (ufp == NULL)
    {
        printf("File not Found!");
        exit(1);
    }
    else{
        while((ch= fgetc(ufp)) !=EOF)
        printf("%c", ch);
    }
    fclose(ufp);
}
//function to show old transactions ends

//main starts
int main(int argc, char const *argv[])
{
    int a;
    printf("1. Insert Details\n");
    printf("2. Movie details\n");
    printf("3. Find the Movie\n");
    printf("4. Book ticket\n");
    printf("5. See past record\n");
    printf("What you want to do? : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        insert_details();
        break;
    case 2:
        view_details();
        break;
    case 3:
        find();
        break;
    case 4:
        book_ticket();
        break;
    case 5:
        past_record();
        break;
    
    default:
        break;
    }
    return 0;
}
//main ends