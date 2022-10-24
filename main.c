#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<unistd.h>
#include<time.h>

void menu();
void admin();
void admin_home();
void create_pass();
void tools();
void gene_pass();
void en_pass();
void de_pass();
void view_pass();
void view_pass_check();
void search_pass();
void delete_pass();
void edit_pass();
void total_pass();
int total();

typedef struct pass{
  char app_name[100];
  char username[100];
  char password[100];
}pass;

int ch,i;

void main()
{
  menu();
}

void menu()
{
  while(1)
  {
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t********************\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 1.Admin Login\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
    printf("\n\t\t\t\t\t\t\t\t********************\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 :
      {
        admin();
        break;
      }
      case 2 : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
        exit(0);
        break;
      }
      default : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Main Menu\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
            sleep(2);
            menu();
            break;
          }
          case 2 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
            sleep(2);
            exit(0);
            break;
          }
          default : {
            printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
            printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
            sleep(2);
            menu();
          }
        }
      }
    }
  }
}

void admin()
{
  int i,x=10,ch;

  char admin_user[] = "0000";      
  char admin_pass[] = "0000";

  char admin_user1[10];         
  char admin_pass1[10];

  char ch2,ch1;
  while(x != 0)
  {
    system("cls");
    fflush(stdin);
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\tENTER USERNAME : ");
    for(i=0; i<10; i++)
    {
      ch1=getch();
      admin_user1[i]=ch1;
      
      if(ch1!=13)      
        printf("*");
      if(ch1 == 13)
        break;
    }
    admin_user1[i]='\0';

    fflush(stdin);
    printf("\n\n\n\n\t\t\t\t\t\t\t\tENTER PASSWORD : ");
    for(i=0; i<10; i++)
    {
      ch2=getch();
      admin_pass1[i]=ch2;
      
      if(ch2!=13)      //13 is ASCII of Enter key
        printf("*");
      if(ch2 == 13)
        break;
    }
    admin_pass1[i]='\0';

    if(strcmp(admin_user,admin_user1) == 0 && strcmp(admin_pass,admin_pass1) == 0)
    {
      printf("\n\n\n\t\t\t\t\t\t\t\t ******Verification Successfull ******\n\n");
      x=0;
      system("cls");
      printf("\n\n\n\n\t\t\t\t\t\t\tTaking you to the Admin Menu Page ...");
      sleep(2);
      admin_home();
    }
    else if(strcmp(admin_user,admin_user1) != 0 && strcmp(admin_pass,admin_pass1) == 0)
    {
      system("cls");
      printf("\n\n\n\n\t\t\t\t\t\t\t\tWRONG USERNAME\n");
      sleep(2);
      x=10;
    }
    else if(strcmp(admin_user,admin_user1) == 0 && strcmp(admin_pass,admin_pass1) != 0)
    {
      system("cls");
      printf("\n\n\n\n\t\t\t\t\t\t\t\tWRONG PASSWORD\n");
      sleep(2);
      x=10;
    }
    else if(strcmp(admin_user,admin_user1) != 0 && strcmp(admin_pass,admin_pass1) != 0)
    {
      system("cls");
      printf("\n\n\n\n\t\t\t\t\t\t\t\tWRONG USERNAME AND WRONG PASSWORD\n");
      sleep(2);
      x=10;
    }
  }
}

void admin_home()
{
  system("cls");
  int ch;
  printf("\n\t\t\t\t\t\t\t\t[>>> ADMIN PORTAL <<<]\n");
  printf("\n\t\t\t\t\t\t\t\t*************************\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 1.Save Password\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 2.View Password\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 3.Search Password\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 4.Delete password\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 5.Edit Password\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 6.Total Passwords\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 7.Tools\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 8.Log Out\n");
  printf("\n\t\t\t\t\t\t\t\t*************************\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1 : 
    {
      create_pass();
      break;
    }
    case 2 : 
    {
      view_pass_check();
      break;
    }
    case 3 : 
    {
      search_pass();
      break;
    }
    case 4 : 
    {
      delete_pass();
      break;
    }
    case 5 : 
    {
      edit_pass();
      break;
    }
    case 6 : 
    {
      total_pass();
      break;
    }
    case 7 : 
    {
      tools();
      break;
    }
    case 8 : 
    {
      printf("\n\t\t\t\t\t\t\t\tLogout Successfull\n");
      sleep(2);
      menu();
      break;
    }
    default : {
      system("cls");
      printf("\n\t\t\t\t\t\t\t\t!!! InValid Input !!!\n");
      sleep(2);
      admin_home();
    }
  }  
}

void create_pass()
{
  system("cls");
  pass *s;
  FILE *fp;
  int n,i;

  printf("\n\n\n\t\t\t\t\t\tEnter how many passwords you want to Save : ");
  scanf("%d",&n);
  s = (pass *)calloc(n,sizeof(pass));
  fp = fopen("info.dll","a");
  system("cls");
  for(i=0;i<n;i++)
  {
    fflush(stdin);
    printf("\n\n\n\n\t\t\t\t\t\t\t\tEnter %d App Name : ",i+1);
    gets(s[i].app_name);

    fflush(stdin);
    printf("\n\n\t\t\t\t\t\t\t\tEnter %d Username : ",i+1);
    gets(s[i].username);

    fflush(stdin);
    printf("\n\n\t\t\t\t\t\t\t\tEnter %d Password : ",i+1);
    gets(s[i].password);
    printf("\n\n\n");
    fwrite(&s[i],sizeof(pass),1,fp);
  }
  fclose(fp);
  system("cls");
  printf("\n\n\n\t\t\t\t\t\t\t\tDetails Saved Successfully\n");
  sleep(2);
  system("cls");
  printf("\n\t\t\t\t\t\t\t\t* ==> 1.Save Again\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to the Admin Menu\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 3.Exit\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1 : 
    {
      create_pass();
      break;
    }
    case 2 : 
    {
      admin_home();
      break;
    }
    case 3 : 
    {
      system("cls");
      printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
      sleep(2);
      exit(0);
      break;
    }
    default : 
    {
      system("cls");
      printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
      printf("\n\t\t\t\t\t\t\t\t*********************************\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
      printf("\n\t\t\t\t\t\t\t\t*********************************\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1 : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
          sleep(2);
          admin_home();
          break;
        }
        case 2 : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
          sleep(2);
          exit(0);
          break;
        }
        default : {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
          printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
          sleep(2);
          admin_home();
        }
      }
    }
  }
}

void gene_pass()
{
  system("cls");
  int size;
  printf("\n\n\n\n\n\t\t\t\t\t\t\t\tEnter Password Size : ");
  scanf("%d",&size);
  int i = 0;
  int randomizer = 0;
  srand((unsigned int)(time(NULL)));
  
  char numbers[] = "0123456789";
  char letter[] = "abcdefghijklmnoqprstuvwyzx";
  char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
  char symbols[] = "!@#$^&*?<>";
  
  char password[size];
  char result[size];
  
  randomizer = rand() % 4;
  printf("\n\n\t\tPassword is : ");
  for(i=1;i<=size;i++){
    if(randomizer == 1){
      password[i] = numbers[rand() % 10];
      randomizer = rand() % 4;
      printf("%c", password[i]);
    }
    else if(randomizer == 2){
      password[i] = symbols[rand() % 8];
      randomizer = rand() % 4;
      printf("%c", password[i]);
    }
    else if(randomizer == 3){
      password[i] = LETTER[rand() % 26];
      randomizer = rand() % 4;
      printf("%c", password[i]);
    }
    else{
      password[i] = letter[rand() % 26];
      randomizer = rand() % 4;
      printf("%c", password[i]);
    }
  }

  printf("\n\t\t\t\t\t\t\t\t* ==> 1.Generate Password again\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to the Tools Menu\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 3.Return to the Admin Menu\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 4.Exit\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1 : 
    {
      gene_pass();
      break;
    }
    case 2 : 
    {
      tools();
      break;
    }
    case 3 : 
    {
      admin_home();
      break;
    }
    case 4 : 
    {
      system("cls");
      printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
      exit(0);
      break;
    }
    default : 
    {
      system("cls");
      printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
      printf("\n\t\t\t\t\t\t\t\t*********************************\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
      printf("\n\t\t\t\t\t\t\t\t*********************************\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1 : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
          sleep(2);
          admin_home();
          break;
        }
        case 2 : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
          sleep(2);
          exit(0);
          break;
        }
        default : {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
          printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
          sleep(2);
          admin_home();
        }
      }
    }
  }
}

void en_pass()
{
  system("cls");
  int i, x;
  char str[100];
  fflush(stdin);
  printf("\n\n\n\t\t\t\t\t\t\t\tPlease enter a Password : ");
  gets(str);
  printf("\n\t\t\t\t\t\t\t\tEnter a number(1-20) : ");
  scanf("%d",&x);
  printf("\n\t\t\t\t\t\t\t\t!!! Please remind this code !!!\n");
  printf("\n\t\t\t\t\t\t\t\t!!! User have to put the same\n\n\t\t\t\t\t\t\t\tcode in Password Decryption !!!\n\n\n");
  if(x>=1 && x<=20)
  {
    for(i=0;i<strlen(str);i++)
    {
      str[i] = str[i] + x;
    }
    printf("\n\t\t\t\t\t\t\t\tEncrypted Password : %s\n\n\n", str);
    
    printf("\n\t\t\t\t\t\t\t\t* ==> 1.Encrypt again\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to the Tools Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 3.Return to the Admin Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 4.Exit\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : 
      {
        en_pass();
        break;
      }
      case 2 : 
      {
        tools();
        break;
      }
      case 3 : 
      {
        admin_home();
        break;
      }
      case 4 : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
        exit(0);
        break;
      }
      default : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
            sleep(2);
            admin_home();
            break;
          }
          case 2 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
            sleep(2);
            exit(0);
            break;
          }
          default : {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
            printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
            sleep(2);
            admin_home();
          }
        }
      }
    }
  }
  else{
    printf("\n\t\t\t\t\t\t\t\tNumber must be between (1-20) !!!\n\n\n");

    printf("\n\t\t\t\t\t\t\t\t* ==> 1.Encrypte again\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to the Tools Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 3.Return to the Admin Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 4.Exit\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : 
      {
        en_pass();
        break;
      }
      case 2 : 
      {
        tools();
        break;
      }
      case 3 : 
      {
        admin_home();
        break;
      }
      case 4 : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
        exit(0);
        break;
      }
      default : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
            sleep(2);
            admin_home();
            break;
          }
          case 2 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
            sleep(2);
            exit(0);
            break;
          }
          default : {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
            printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
            sleep(2);
            admin_home();
          }
        }
      }
    }
  }
}

void de_pass()
{
  system("cls");
  int i, x;
  char str[100];
  fflush(stdin);
  printf("\n\n\n\t\t\t\t\t\t\t\tPlease enter a Password : ");
  gets(str);
  printf("\n\t\t\t\t\t\t\t\tEnter a number(1-20) : ");
  scanf("%d",&x);
  if(x>=1 && x<=20)
  {
    for(i=0;i<strlen(str);i++)
    {
      str[i] = str[i] - x;
    }
    printf("\n\t\t\t\t\t\t\t\tDecrypted Password : %s\n\n\n", str);
    
    printf("\n\t\t\t\t\t\t\t\t* ==> 1.Decrypt again\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to the Tools Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to the Admin Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 3.Exit\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : 
      {
        de_pass();
        break;
      }
      case 2 : 
      {
        tools();
        break;
      }
      case 3 : 
      {
        admin_home();
        break;
      }
      case 4 : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
        exit(0);
        break;
      }
      default : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
            sleep(2);
            admin_home();
            break;
          }
          case 2 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
            sleep(2);
            exit(0);
            break;
          }
          default : {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
            printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
            sleep(2);
            admin_home();
          }
        }
      }
    }
  }
  else{
    printf("\n\t\t\t\t\t\t\t\tNumber must be between (1-20) !!!\n\n\n");

    printf("\n\t\t\t\t\t\t\t\t* ==> 1.Decrypte again\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to the Tools Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 3.Return to the Admin Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 4.Exit\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : 
      {
        de_pass();
        break;
      }
      case 2 : 
      {
        tools();
        break;
      }
      case 3 : 
      {
        admin_home();
        break;
      }
      case 4 : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
        exit(0);
        break;
      }
      default : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
            sleep(2);
            admin_home();
            break;
          }
          case 2 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
            sleep(2);
            exit(0);
            break;
          }
          default : {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
            printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
            sleep(2);
            admin_home();
          }
        }
      }
    }
  }
}

void tools()
{
  system("cls");
  int ch;
  printf("\n\t\t\t\t\t\t\t\t**************************\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 1.Generate Password\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 2.Encrypt Password\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 3.Decrypt Password\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 4.Return to Admin Menu\n");
  printf("\n\t\t\t\t\t\t\t\t**************************\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1 : 
    {
      gene_pass();
      break;
    }
    case 2 : 
    {
      en_pass();
      break;
    }
    case 3 : 
    {
      de_pass();
      break;
    }
    case 4 : 
    {
      admin_home();
      break;
    }
    default : 
    {
      system("cls");
      printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
      printf("\n\t\t\t\t\t\t\t\t*********************************\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
      printf("\n\t\t\t\t\t\t\t\t*********************************\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1 : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
          sleep(2);
          admin_home();
          break;
        }
        case 2 : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
          sleep(2);
          exit(0);
          break;
        }
        default : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
          printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
          sleep(2);
          admin_home();
        }
      }
    }
  }
}

void view_pass_check(){
  system("cls");
  char viewpass[] = "0000";
  char p[10];
  char ch3;

  fflush(stdin);
  printf("\n\n\n\t\t\t\t\t\t\t\tEnter Authentication Code : ");
  for(i=0; i<10; i++)
  {
    ch3=getch();
    p[i]=ch3;
      
    if(ch3!=13)      
      printf("*");
    if(ch3 == 13)
      break;
  }
  p[i]='\0';

  if(strcmp(viewpass,p) == 0)
  {
    system("cls");
    printf("\n\n\n\t\t\t\t\t\t\t\tAuthentication Successful\n\n\n");
    printf("\n\n\n\t\t\t\t\t\t\t\tPlease wait ...");
    sleep(2);
    view_pass();
  }
  else
  {
    system("cls");
    printf("\n\n\n\t\t\t\t\t\t\t\t!!!Wrong Code !!!\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 1.Try again\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to Admin Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 3.Exit\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : 
      {
        view_pass_check();
        break;
      }
      case 2 : 
      {
        admin_home();
        break;
      }
      case 3 : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
        exit(0);
        break;
      }
      default : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
            sleep(2);
            admin_home();
            break;
          }
          case 2 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
            sleep(2);
            exit(0);
            break;
          }
          default : {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
            printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
            sleep(2);
            admin_home();
          }
        }
      }
    }
  }
}

void view_pass()
{
  system("cls");
  pass s1;
  FILE *fp;
  fp = fopen("info.dll","r");
  int check;
  check= total();
  if(check == 0)
  {
    printf("\n\n\n\t\t\t\t\t\t\t\tNo Records Found\n\n\n");
    sleep(3);
    admin_home();
  }
  while(fread(&s1,sizeof(pass),1,fp))
  {
    printf("\n\t\t\t\t\t\t\t\tApp Name : %s\n",s1.app_name);
    printf("\n\t\t\t\t\t\t\t\tUsername : %s\n",s1.username);
    printf("\n\t\t\t\t\t\t\t\tPassword : %s\n\n\n",s1.password);
  }
  printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1 : 
    {
      admin_home();
      break;
    }
    case 2 : 
    {
      system("cls");
      printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
      sleep(2);
      exit(0);
      break;
    }
    default : 
    {
      system("cls");
      printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
      printf("\n\t\t\t\t\t\t\t\t*********************************\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
      printf("\n\t\t\t\t\t\t\t\t*********************************\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1 : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
          sleep(2);
          admin_home();
          break;
        }
        case 2 : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
          sleep(2);
          exit(0);
          break;
        }
        default : {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
          printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
          sleep(2);
          admin_home();
        }
      }
    }
  }
}

void search_pass()
{
  system("cls");
  pass s1,*s;
  FILE *fp,*fp1;
  int found=0,i;
  char check_user[20];
  fp = fopen("info.dll","r");
  fp1 = fopen("temp.dll","w");

  int check;
  check= total();
  if(check == 0)
  {
    printf("\n\n\n\t\t\t\t\t\t\t\tNo Records Found\n\n\n");
    sleep(3);
    admin_home();
  }

  fflush(stdin);
  printf("\n\n\n\t\t\t\t\t\t\t\tEnter App Name to view Password : ");
  gets(check_user);
  while(fread(&s1,sizeof(pass),1,fp))
  {
    if(strcmp(s1.app_name,check_user)==0)
    {
      found =1;
      printf("\n\t\t\t\t\t\t\t\tApp Name : %s\n",s1.app_name);
      printf("\n\t\t\t\t\t\t\t\tUsername : %s\n",s1.username);
      printf("\n\t\t\t\t\t\t\t\tPassword : %s\n",s1.password);

      printf("\n\t\t\t\t\t\t\t\t* ==> 1.Search again\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to Admin Menu\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> 3.Exit\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1 : 
        {
          search_pass();
          break;
        }
        case 2 : 
        {
          admin_home();
          break;
        }
        case 3 : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
          exit(0);
          break;
        }
        default : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
          printf("\n\t\t\t\t\t\t\t\t*********************************\n");
          printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
          printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
          printf("\n\t\t\t\t\t\t\t\t*********************************\n");
          printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
          scanf("%d",&ch);
          switch(ch)
          {
            case 1 : 
            {
              system("cls");
              printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
              sleep(2);
              admin_home();
              break;
            }
            case 2 : 
            {
              system("cls");
              printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
              sleep(2);
              exit(0);
              break;
            }
            default : {
              system("cls");
              printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
              printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
              sleep(2);
              admin_home();
            }
          }
        }
      }
    }
  }
  if(found != 1)
  {
    system("cls");
    printf("\n\t\t\t\t\t\t\t\tUsername is Not Matching With Our Records\n");
    sleep(2);
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t* ==> 1.Try Again\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to Admin Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 3.Exit\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : 
      {
        search_pass();
        break;
      }
      case 2 : 
      {
        admin_home();
        break;
      }
      case 3 : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
        exit(0);
        break;
      }
      default : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
            sleep(2);
            admin_home();
            break;
          }
          case 2 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
            sleep(2);
            exit(0);
            break;
          }
          default : {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
            printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
            sleep(2);
            admin_home();
          }
        }
      }
    }
  }
}

void delete_pass()
{
  system("cls");
  pass s1,*s;
  FILE *fp,*fp1;
  int found=0,i;
  char check_user[20];
  fp = fopen("info.dll","r");
  fp1 = fopen("temp.dll","w");

  int check;
  check= total();
  if(check == 0)
  {
    printf("\n\n\n\t\t\t\t\t\t\t\tNo Records Found\n\n\n");
    sleep(3);
    admin_home();
  }

  fflush(stdin);
  printf("\n\n\n\t\t\t\t\t\t\t\tEnter App Name to Delete Record : ");
  gets(check_user);
  while(fread(&s1,sizeof(pass),1,fp))
  {
    if(strcmp(s1.app_name,check_user)==0)
    {
      found =1;
    }
    else
    {
      fwrite(&s1,sizeof(pass),1,fp1);
    }
  }
  fclose(fp);
  fclose(fp1);
  
  if(found == 1)
  {
    fp1 = fopen("temp.dll","r");
    fp = fopen("info.dll","w");

    while(fread(&s1,sizeof(pass),1,fp1))
    {
      fwrite(&s1,sizeof(pass),1,fp);
    }

    fclose(fp);
    fclose(fp1);
    system("cls");
    printf("\n\n\n\t\t\t\t\t\t\t\t* Data Deleted Successfully *\n\n\n");
    sleep(2);
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t* ==> 1.Delete Again\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to the Admin Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 3.Exit\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : 
      {
        delete_pass();
        break;
      }
      case 2 : 
      {
        admin_home();
        break;
      }
      case 3 : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
        sleep(2);
        exit(0);
        break;
      }
      default : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
            sleep(2);
            admin_home();
            break;
          }
          case 2 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
            sleep(2);
            exit(0);
            break;
          }
          default : {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
            printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
            sleep(2);
            admin_home();
          }
        }
      }
    }
  }
  else if(found != 1)
  {
    system("cls");
    printf("\n\t\t\t\t\t\t\t\tUsername is Not Matching With Our Records\n");
    sleep(2);
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t* ==> 1.Try Again\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to Admin Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 3.Exit\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : 
      {
        delete_pass();
        break;
      }
      case 2 : 
      {
        admin_home();
        break;
      }
      case 3 : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
        exit(0);
        break;
      }
      default : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
            sleep(2);
            admin_home();
            break;
          }
          case 2 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
            sleep(2);
            exit(0);
            break;
          }
          default : {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
            printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
            sleep(2);
            admin_home();
          }
        }
      }
    }
  }
}

void edit_pass()
{
  system("cls");
  pass s1,*s;
  FILE *fp,*fp1;
  int found=0,i;
  char check_user[20];
  fp = fopen("info.dll","r");
  fp1 = fopen("temp.dll","w");

  int check;
  check= total();
  if(check == 0)
  {
    printf("\n\n\n\t\t\t\t\t\t\t\tNo Records Found\n\n\n");
    sleep(3);
    admin_home();
  }

  fflush(stdin);
  printf("\n\n\n\t\t\t\t\t\t\t\tEnter App Name to Update : ");
  gets(check_user);
  system("cls");
  while(fread(&s1,sizeof(pass),1,fp))
  {
    if(strcmp(s1.app_name,check_user)==0)
    {
      found =1;

      fflush(stdin);
      printf("\n\n\n\n\t\t\t\t\t\t\t\tEnter App Name : ");
      gets(s1.app_name);

      fflush(stdin);
      printf("\n\n\t\t\t\t\t\t\t\tEnter Username : ");
      gets(s1.username);

      fflush(stdin);
      printf("\n\n\t\t\t\t\t\t\t\tEnter Password : ");
      gets(s1.password);
    }
    fwrite(&s1,sizeof(pass),1,fp1);
  }
  fclose(fp);
  fclose(fp1);
  
  if(found == 1)
  {
    fp1 = fopen("temp.dll","r");
    fp = fopen("info.dll","w");

    while(fread(&s1,sizeof(pass),1,fp1))
    {
      fwrite(&s1,sizeof(pass),1,fp);
    }

    fclose(fp);
    fclose(fp1);
    system("cls");
    printf("\n\t\t\t\t\t\t\t\tData Updated Successfully\n\n\n");
    sleep(2);
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t* ==> 1.Edit again\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to the Admin Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 3.Exit\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : 
      {
        edit_pass();
        break;
      }
      case 2 : 
      {
        admin_home();
        break;
      }
      case 3 : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
        exit(0);
        break;
      }
      default : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
            sleep(2);
            admin_home();
            break;
          }
          case 2 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
            sleep(2);
            exit(0);
            break;
          }
          default : {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
            printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
            sleep(2);
            admin_home();
          }
        }
      }
    }
  }
  else if(found != 1)
  {
    system("cls");
    printf("\n\t\t\t\t\t\t\t\tUsername is Not Matching With Our Records\n");
    sleep(2);
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t* ==> 1.Try Again\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 2.Return to Admin Menu\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> 3.Exit\n");
    printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : 
      {
        edit_pass();
        break;
      }
      case 2 : 
      {
        admin_home();
        break;
      }
      case 3 : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
        exit(0);
        break;
      }
      default : 
      {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
        printf("\n\t\t\t\t\t\t\t\t*********************************\n");
        printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
            sleep(2);
            admin_home();
            break;
          }
          case 2 : 
          {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
            sleep(2);
            exit(0);
            break;
          }
          default : 
          {
            sleep("cls");
            printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
            printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
            sleep(2);
            admin_home();
          }
        }
      }
    }
  }
}

void total_pass()
{
  system("cls");
  pass s1;
  FILE *fp;
  fp = fopen("info.dll","r");
  int check;
  check= total();
  if(check == 0)
  {
    printf("\n\n\n\t\t\t\t\t\t\t\tNo Records Found\n\n\n");
    sleep(3);
    admin_home();
  }
  fseek(fp,0,SEEK_END);
  int n = ftell(fp)/sizeof(pass);
  printf("\n\t\t\t\t\t\t\t\tNo. of Records : %d\n\n\n",n);
  fclose(fp);

  printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
  printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1 : 
    {
      admin_home();
      break;
    }
    case 2 : 
    {
      system("cls");
      printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
      exit(0);
      break;
    }
    default : 
    {
      system("cls");
      printf("\n\t\t\t\t\t\t\t\t!!!! Invalid Choice !!!!\n");
      printf("\n\t\t\t\t\t\t\t\t*********************************\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> 1.Return to the Admin Menu\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> 2.Exit\n");
      printf("\n\t\t\t\t\t\t\t\t*********************************\n");
      printf("\n\t\t\t\t\t\t\t\t* ==> Enter Your Choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1 : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tPlease Wait\n");
          sleep(2);
          admin_home();
          break;
        }
        case 2 : 
        {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tSoftware Exited Successfully\n");
          sleep(2);
          exit(0);
          break;
        }
        default : {
          system("cls");
          printf("\n\t\t\t\t\t\t\t\tInValid Input\n");
          printf("\n\t\t\t\t\t\t\t\tTry Again ...\n");
          sleep(2);
          admin_home();
        }
      }
    }
  }
}

int total()
{
  system("cls");
  pass s1;
  FILE *fp;
  fp = fopen("info.dll","r");
  fseek(fp,0,SEEK_END);
  int n = ftell(fp)/sizeof(pass);
  fclose(fp);
  return n;
}