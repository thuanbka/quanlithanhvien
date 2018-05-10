#include <iostream>
#include <fstream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
typedef struct thanhvien
{
	int ID;
	char name[20] ;
	int age;
	int groupid;
}thanhvien;
thanhvien a[200];
int i=0;
void themthanhvien();
void hienthithongtinthanhvien();
void timthanhvientheoid();
void menu();
void xoathanhvien();
void suathongtinthanhvien();
main()
{
	  system("color 70");
      printf("\t************************************************\n");
      printf("\t*Chao mung den voi ung dung quan li thanh vien*\n");
      printf("\t************************************************\n");
      getch();
      menu();
  }
  void menu()
  {
  	 int ch;
     system("cls");
     printf("\t***********************************************************\n");
     printf("\t\t\t1.Them thanh vien.\n");
     printf("\t\t\t2.Hien thi thong tin thanh vien.\n");
     printf("\t\t\t3.Tim thanh vien theo id.\n");
     printf("\t\t\t4.Xoa thanh vien.\n");
     printf("\t\t\t5.Sua thong tin thanh vien.\n");
     printf("\t\t\t An 0 de thoat\n");
     printf("\t\t\t Chon 1-->6 or 0:\n");
     printf("\t***********************************************************\n");
     scanf("%d",&ch);
     if(ch==0)
     {
     system("cls");
     exit(0);
     }
     switch(ch)
     { case 1: themthanhvien();menu();break;
       case 2: hienthithongtinthanhvien();menu();break;
       case 3: timthanhvientheoid();menu();break;
       case 4: xoathanhvien();menu();break;
       case 5:suathongtinthanhvien();menu();break;
       case 0:system("cls");menu();break;
     }
     	
  }
  void themthanhvien()
  { system("cls");
  int done =1;
  	char name[20] ,ch;
  	do {
	  
                         fflush(stdin);
                         system("cls");
                         printf("Nhap id thanh vien:\n");
                         scanf("%d",&a[i].ID);
                         if(a[i].ID==0)
                         done =0;
                         else
                         {
                         	fflush(stdin);
                         	printf(" nhap ten thanh vien:\n");
                         	gets(name);
							fflush (stdin);
                         }
                         if(strlen(name)==0)
                         done=0;
                         else
                         { 
                            fflush(stdin);
                            strcpy(a[i].name,name);
                         	printf("nhap tuoi thanh vien:\n");
                         	scanf("%d",&a[i].age);
                         	fflush(stdin);
                         }
                         if(a[i].age==0)
                         done=0;
                         else
                         {
                         	printf(" nhap group id thanh vien:\n");
                         	scanf("%d",&a[i].groupid);
                         	fflush(stdin);
                         }
                           i++;
        }while(!done);
               do
               {
                   printf("Ban muon tiep tuc?(Y/N):");
                   ch=getchar();
                   fflush(stdin);
               }while(ch!='y'&&ch!='Y'&&ch!='n'&&ch!='N');
                              if(ch=='y'||ch=='Y')
                              themthanhvien();
                              else{ fflush(stdin);
                              system("cls");
							  main();
							  }
                              

}

void hienthithongtinthanhvien()
{  system("cls");
	int n;
  if(i!=0)
 {
    printf("\n|-------------|-------------------|----------|-------------|");
	printf("\n|ID           |name               |age       |group id     |");
	printf("\n|-------------|-------------------|----------|-------------|");
	for(n=0;n<i;n++)
	printf ("\n|%13d|%19s|%10d|%13d|",a[n].ID,a[n].name,a[n].age,a[n].groupid);
	printf("\n|-------------|-------------------|----------|-------------|");
 }
  else
              printf(" chua co thanh vien nao trong danh sach");
              getch();
              system("cls");
              main();
}
void xoathanhvien()
{
     int j=0,id;
     int n=0;
     char ch;
      system("cls");
     printf("nhap Id thanh vien can tim :");
     scanf("%d",&id);
     fflush(stdin);
     for(j=0;j<i;j++)
 {
	 if(a[j].ID==id)
    {
      printf("\n Ten thanh vien :%s",a[j].name);
      printf("\n ID thanh vien:%d",a[j].ID);
      printf("\n Tuoi thanh vien:%d",a[j].age);
      printf("\n Group ID:%d",a[j].groupid);
      do
      {
        printf("\n Ban co muon xoa thong tin?(Y/N):");
        ch=getchar();
        fflush(stdin);
      }while(ch!='y'&&ch!='Y'&&ch!='n'&&ch!='N');
      if(ch=='y'||ch=='Y')
	   {
	   for(n=j;n<i-1;n++)
		a[n] = a[n+1];
        i--;}
               do
               {
                   printf("Ban muon tiep tuc?(Y/N):");
                   ch=getchar();
                   fflush(stdin);
               }while(ch!='y'&&ch!='Y'&&ch!='n'&&ch!='N');
                              if(ch=='y'||ch=='Y')
                              xoathanhvien();
                              else
                              { fflush(stdin);
                                system("cls");
							   main();
							  }
    }
  }
      printf("\n khong tim thay thanh vien can xoa");
      do
               {
                   printf("\n Ban muon tiep tuc?(Y/N):");
                   ch=getchar();
                   fflush(stdin);
               }while(ch!='y'&&ch!='Y'&&ch!='n'&&ch!='N');
                              if(ch=='y'||ch=='Y')
                              xoathanhvien();
                              else
                              { fflush(stdin);
                                system("cls");
							   main();
							  }
      getch();
      system("cls");
     main();
	
}
void suathongtinthanhvien()
{
	 int j,id;
     char ch,nh,tenthanhvienmoi[20];
     system("cls");
     printf("Nhap ID thanh vien can sua:");
     scanf("%d",&id);
     fflush(stdin);
     for(j=0;j<i;j++)
     {
	 if(a[j].ID==id)
    {
      printf("\n Ten thanh vien :%s",a[j].name);
      printf("\n ID thanh vien:%d",a[j].ID);
      printf("\n Tuoi thanh vien:%d",a[j].age);
      printf("\n Group ID:%d",a[j].groupid);
      do
      {
        printf("\n Ban co muon sua thong tin?(Y/N):");
        ch=getchar();
        fflush(stdin);
      }while(ch!='y'&&ch!='Y'&&ch!='n'&&ch!='N');
      if(ch=='y'||ch=='Y')
      {
      	 printf("\n Nhap ten thanh vien moi:");
            scanf("%s",tenthanhvienmoi);
            strcpy(a[j].name,tenthanhvienmoi);
            fflush(stdin);
            printf("\n Sua Id:");
            scanf("%d",&a[j].ID);
            fflush(stdin);
            printf("\n Sua tuoi thanh vien:");
            scanf("%d",&a[j].age);
            fflush(stdin);
            printf("\n Sua Group Id:");
            scanf("%d",&a[j].groupid);
            fflush(stdin);
        }
            do
               {
                   printf("\n Ban muon tiep tuc?(Y/N):");
                   ch=getchar();
                   fflush(stdin);
               }while(ch!='y'&&ch!='Y'&&ch!='n'&&ch!='N');
                              if(ch=='y'||ch=='Y')
                              suathongtinthanhvien();
                              else
                              { fflush(stdin);
                                system("cls");
							   main();
							  }
    }
}
      printf(" \n khong tim thay thanh vien can sua");
       do
               {
                   printf("\n Ban muon tiep tuc?(Y/N):");
                   ch=getchar();
                   fflush(stdin);
               }while(ch!='y'&&ch!='Y'&&ch!='n'&&ch!='N');
                              if(ch=='y'||ch=='Y')
                              suathongtinthanhvien();
                              else
                              { fflush(stdin);
                                system("cls");
							   main();
							  }
     getch();
     system("cls");
     main();
 }
 void timthanhvientheoid()
{ int j;
  char ch;
	system("cls");
	int id;
	printf(" nhap id thanh vien:\n");
	scanf("%d",&id);
	fflush(stdin);
	for(j=0;j<i;j++)
	if(a[j].ID==id)
	{
		printf("\n ten thanh vien can tim:%s",a[j].name);
		printf("\n tuoi thanh vien can tim:%d",a[j].age);
		printf("\n group id thanh vien can tim:%d",a[j].groupid);
		do
               {
                   printf("\n Ban muon tiep tuc?(Y/N):");
                   ch=getchar();
                   fflush(stdin);
               }while(ch!='y'&&ch!='Y'&&ch!='n'&&ch!='N');
                              if(ch=='y'||ch=='Y')
                              timthanhvientheoid();
                              else
                              { fflush(stdin);
                                system("cls");
							    main();
							  }			
	}
	    printf("\n khong co thanh vien can tim");
	    do
               {
                   printf("\n Ban muon tiep tuc?(Y/N):");
                   ch=getchar();
                   fflush(stdin);
               }while(ch!='y'&&ch!='Y'&&ch!='n'&&ch!='N');
                              if(ch=='y'||ch=='Y')
                              timthanhvientheoid();
                              else
                              { fflush(stdin);
                                system("cls");
							    main();
							  }			
                      getch();
                      system("cls");
                      main();

	
}
  
          
           
  
  
  
  
  
  
