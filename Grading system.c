#include <stdio.h>
#include <windows.h>

int main()
{
	int ass1,ass2,cat1,cat2,cat3,exam;
	int sum=0,main_exit;
	grade:
	system("color 0a");
	printf("Enter assignment one marks\n");
	scanf("%d", &ass1);
	if(ass1<=5){
		printf("Enter assignment two marks\n");
		scanf("%d", &ass2);
		if(ass2<=5){
			printf("Enter CAT1 marks\n");
			scanf("%d", &cat1);
			if(cat1<=10){
				printf("Enter CAT2 marks\n");
				scanf("%d", &cat2);
				if(cat2<=10){
					printf("Enter CAT3 marks\n");
					scanf("%d", &cat3);
					if(cat3<=10){
						printf("Enter finall exam mark\n");
						scanf("%d", &exam);
						if(exam<=60){
							system("cls");
							goto add;
						}
						else
						{
							printf("INVALID MARKS\n");
							Sleep(500);
							system("cls");
							goto grade;
							
						}
					}
					else
					{
						printf("INVALID MARKS\n");
						Sleep(500);
						system("cls");
						goto grade;
					}
				}
				else
				{
					printf("INVALID MARKS\n");
					Sleep(500);
					system("cls");
					goto grade;
				}
			}
			else
			{
				printf("INVALID MARKS\n");
				Sleep(500);
				system("cls");
				goto grade;
			}
		}
		else
		{
			printf("INVALID MARKS\n");
			Sleep(500);
			system("cls");
			goto grade;
		}
	}
	else
	{
		printf("INVALID MARKS\n");
		Sleep(500);
		system("cls");
		goto grade;
	}
	add:
	sum=ass1+ass2+cat1+cat2+cat3+exam;
	system("color 1d");
	printf("TOTAL %d\n", sum);
	if(sum<=100 && sum>=80){
		printf("GRADE A");
	}
	else if(sum<80 && sum>=70){
		printf("GRADE B");
	}
	else if(sum<70 && sum>=60){
		printf("GRADE C");
	}
	else if(sum<60 && sum>=50){
		printf("GRADE D");
	}
	else if(sum<50 && sum>=0){
		printf("GRADE E");
	}
	else
	{
		printf("INVALID GRADE");
	}
	Sleep(1000);
	printf("\n\n\t\tPress 1 to continue or ANY KEY to exit ");
	scanf("%d",&main_exit);
    system("cls");
	if(main_exit==1){
		goto grade;
	}
	else
	{
		system("cls");
	}
		
	
	return 0;
}