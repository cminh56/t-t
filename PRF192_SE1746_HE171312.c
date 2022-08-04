#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<conio.h>
int i,n;
int status, userChoice, temp;
char choice;


int main() {
	printf("*********************************************************\n");
	printf("*\t Date \t\t:\t 4/6/2022 \t\t*\n");
	printf("*\t Student Name \t:\t Hoang Chinh Minh\t*\n");
	printf("*\t Student ID \t:\t HE171312 \t\t*\n");
	printf("*********************************************************\n");


	int menu() {
		printf("\n*********************************************************\n");
		printf("*    Plese select the number for appropritate tasks \t*\n");
		printf("*\t\t [1]. Question 1 \t\t\t*\n");
		printf("*\t\t [2]. Question 2 \t\t\t*\n");
		printf("*\t\t [3]. Exit \t\t\t\t*\n");
		printf("*********************************************************\n");
	}




	int question1() {

		printf("\n\n********************************************************************************************************\n");
		printf("*\t\t    QUESTION 1\t\t\t\t\t\t\t\t\t       *");
		printf("\n* [a]. dao nguoc cac chu so cua mot so nguyen cho truoc \t\t\t\t\t       *");
		printf("\n* [b]. cong nhieu lan tat ca cac chu so cua 1 so khong am da cho cho den khi ket qua chi co mot chu so.*");
		printf("\n* [c]. tim so va tong cua tat ca cac so nguyen tu 9 den 1000 chia het cho 9.\t\t\t       *");
		printf("\n* [B]. Back\t\t\t\t\t\t\t\t\t\t\t       *");
		printf("\n********************************************************************************************************\n");





		do {


			printf("Input: ");
			scanf(" %c",&choice);
			fflush(stdin);
			//--------------------kiem tra sai cho nhap lai-----------------

		} while(choice !='a' && choice !='b' && choice !='c' && choice !='B');




		switch(choice) {
			case 'a' :
				;
				int Reverse(int n) {
					/*
					    Lấy chữ số cuối cùng bằng cách chia dư cho 10
					    Bỏ chữ số cuối cùng bằng cách chia cho 10
					 */
					int reNum = n % 10; // B1: Lấy chữ số cuối cùng
					n /= 10; // Bỏ chữ số cuối cùng
					int last;
					while(n > 0) {
						last = n % 10; // Lấy chữ số cuối cùng
						n /= 10; // Bỏ chữ số cuối cùng
						reNum = reNum * 10 + last; // Chính là các bước 2 3 4
					}
					while(n < 0) {
						last = n % 10; // Lấy chữ số cuối cùng
						n /= 10; // Bỏ chữ số cuối cùng
						reNum = reNum * 10 + last; // Chính là các bước 2 3 4
					}
					return reNum;
				}

				{
					int num;
					printf("Nhap so nguyen = ");
					status =scanf("%d", &num);
					while(status!=1) {
						while((temp=getchar()) != EOF && temp != '\n');
						printf("Invalid input... please enter a number : ");
						status = scanf("%d", &num);
					}
					printf("\nReNum = %d", Reverse(num));
				}
				question1();
				break;
			case 'b':
				;
				int a;
				int s = 0, l=0 ;
				int n;
				int tongchuso(int n) {
					for(; n!=0;) {
						a = n % 10;
						s += a;
						n /= 10;

					}
					printf("%d\n",s);
				}
				int tongchuso1(int s) {
					for(; s!=0;) {
						a = s % 10;
						l += a;
						s /= 10;

					}
					printf("%d\n",l);

				}
				{
					do {

						printf("Nhap n: ");
						status = scanf("%d",&n);
						while(status!=1) {
							while((temp=getchar()) != EOF && temp != '\n');
							printf("Invalid input... please enter a number : ");
							status = scanf("%d", &n);
						}
					} while(n<0);
					tongchuso(n);
					if (s>9) {
						tongchuso1(s);
					}

				}
				question1();
				break;
			case 'c':
				;
				int i, sum=0;

				int chiahet9()

				{

					for(i=9; i<1000; i++) {
						if(i%9==0) {
							printf("\t%d",i);
							sum=sum+i;

						}
					}
					printf("\n\nSUM = %d", sum);
				}


				{
					chiahet9();
				}

				question1();
				break;
			case 'B':
				break;
		}


	}




	int question2() {



		printf("\n*********************************************************\n");
		printf("*\t\t    QUESTION 2\t\t\t        *");
		printf("\n*\t\t [a]. tam giac ki tu vuong \t\t*\n");
		printf("*\t\t [b]. tam giac ki tu deu \t\t*\n");
		printf("*\t\t [c]. tam giac pascal so \t\t*");
		printf("\n*\t\t [B]. Back\t\t\t\t*");
		printf("\n*********************************************************\n");

		do {
			printf("Input  : ");
			scanf(" %c",&choice);
			//--------------------kiem tra sai cho nhap lai-----------------
			fflush(stdin);
		} while(choice !='a' && choice !='b' && choice !='c' && choice !='B');
		//--------------------kiem tra sai cho nhap lai-----------------


		switch(choice) {
			case 'a':
				;

				int tamgiacvuong(int n) {
					int kytu=65;
					int i,k,m,a;

					for(i=1; i<=n; i++) {

						for(k=1; k<=i; k++)


							printf("   %c   ",kytu++);

						printf("\n");

					}


				}
				{
					do {

						printf("Nhap so dong: ");
						status = scanf("%d",&n);
						while(status!=1) {
							while((temp=getchar()) != EOF && temp != '\n');
							printf("Invalid input... please enter a number : ");
							status = scanf("%d", &n);
						}
					} while(n<=0);
					tamgiacvuong(n);
				}
				question2();
				break;
			case 'b':
				;
				int tamgiacdeu(int n) {
					int i,j,k;
					int kytu=65;
					// khai bao so hang.


					for(i = 1; i <= n; i++) {
						for(j = 1; j <= n-i; j++)
							printf(" ");
						printf("    ");

						for(k=1; k<=i; k++)


							printf("%c ",kytu++);

						printf("\n");
					}
					return 1;
				}
				{
					do {

						printf("Nhap so dong: ");
						status = scanf("%d",&n);
						while(status!=1) {
							while((temp=getchar()) != EOF && temp != '\n');
							printf("Invalid input... please enter a number : ");
							status = scanf("%d", &n);
						}
					} while(n<=0);
					tamgiacdeu(n);
				}
				question2();
				break;
			case 'c':
				;
				int giaithua(int k) {
					int i,tich=1;
					for(i=1; i<=k; i++)
						tich=tich*i;
					return tich;
				}
				int tohop(int i,int j) {
					return giaithua(i)/(giaithua(j)*giaithua(i-j));
				}

				{
					int n,k,i,j;
					do {

						printf("Nhap so dong: ");
						status = scanf("%d",&n);
						while(status!=1) {
							while((temp=getchar()) != EOF && temp != '\n');
							printf("Invalid input... please enter a number : ");
							status = scanf("%d", &n);
						}
					} while(n<=0);
					for(i=0; i<=n; i++) {
						for(k=n-i-1; k>=0; k--)
							printf("  ");
						for(j=0; j<=i; j++)
							printf("%4d",tohop(i,j));
						printf("\n");
					}
				}

				question2();
				break;
			case 'B':
				break;
		}


	}

	do {
		menu();
		printf("\nInput a number to run its procedure: ");
		status=scanf("%d", &userChoice);
		printf("\n");
		//----------------kiem tra sai cho nhap lai-------------------
		while(status!=1) {
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Invalid input... please enter a number: ");
			status = scanf("%d", &userChoice);
		}
		switch(userChoice) {
			//---------------------thuc hien quession 1--------------------
			case 1:
				question1();
				break;



//----------------------------thuc hien quession 2----------------------------------------
			case 2:
				question2();
				break;



//----------------------------thuc hien quession 3----------------------------------------
			case 3:
				printf("\n\nThe program is exiting\n\n");
				break;

				//thoat chuong trinh


		}
	} while(userChoice!=3);

	return 0;
}