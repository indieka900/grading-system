#include <stdio.h>
#include <windows.h>
int main()
{
	system("color a0");
	BILL:
	printf("\t\tWelcome!!!!\n");
	int ch;
	int items,retun,milk=70,Applejuice=200,salt=10,blueband=80,sugar=120,sum=0;
	int a,b,c,d,e,h=0,i=0,j=0,k=0,r=0,m;
	printf("items are:\n\t\t1.Milk @ksh70\n\t\t2.Applejuice @ksh200\n\t\t3.salt @ksh10\n\t\t4.Blueband @ksh80\n\t\t5.sugar @ksh120\n\n");
	bill:
	printf("Enter the quantity bought:  ");
	scanf("%d",&items);
	system("color 0b");
	switch(items)
	{
	case 1:
		printf("Enter the quantity of the milk purchased\t");
		scanf("%d",&a);
		h = a*milk;
		printf("%d\n",h);
		printf("Do you want to continue\n\t\tpress 1 to continue or any key exit\n");
		scanf("%d",&retun);
		if (retun==1){
			system("cls");
			goto bill;
		}
		else
		{
			printf("Thanks\n");
			system("cls");
			goto Sum;
		}
		break;
	case 2:
		printf("Enter the quantity of applejuice purchased\t");
		scanf("%d",&b);
		i = b*Applejuice;
		printf("%d\n",i);		
		printf("Do you want to continue\n\t\tpress 1 to continue or any key exit\n");
		scanf("%d",&retun);
		if (retun==1){
			system("cls");
			goto bill;
		}
		else{
			printf("Thanks\n");
			system("cls");
			goto Sum;
		}
		break;
	case 3:
		printf("Enter the quantity of salt purchased\t");
		scanf("%d",&c);
		j = c*salt;
		printf("%d\n",j);
		printf("Do you want to continue\n\t\tpress 1 to continue or any key exit\n");
		scanf("%d",&retun);
		if (retun==1){
			system("cls");
			goto bill;
		}
		else
			printf("Thanks\n");
			system("cls");
			goto Sum;
		
		break;
	case 4:
		printf("Enter the quantity of blueband purchased\t");
		scanf("%d",&d);
		k = d*blueband;
		printf("%d\n",k);
		printf("Do you want to continue\n\t\tpress 1 to continue or any key exit\n");
		scanf("%d",&retun);
		if (retun==1){
			system("cls");
			goto bill;
		}
		else
			printf("Thanks\n");
			system("cls");
			goto Sum;
		
		break;
	case 5:
		printf("Enter the quantity of sugar purchased\t");
		scanf("%d",&e);
		r = e*sugar;
		printf("%d\n",r);
		printf("Do you want to continue\n\t\tpress 1 to continue or any key exit\n");
		scanf("%d",&retun);
		if (retun==1)
		{
			system("cls");
			goto bill;
		}
		else{
			printf("Thanks\n");
			system("cls");
			goto Sum;
		}
	default:
		printf("\n\t\tInvalid item!!!\n\n");
		system("cls");
		goto Sum;
		break;
	Sum:

	printf("summing");
	for(m=0;m<=3;m++){
		printf(".");
 		Sleep(500);
	}
	system("cls");
	printf("\tTOTAL\n");
	sum = h+i+j+k+r;
	printf("  Bill summary = %d\n\n",sum);
	printf("\n\nDo you have to continue press(1) for yes and any key for no\n\n");
	scanf("%d",&ch);
	if (ch==1){
		system("cls");
		goto BILL;
	}
	else
	{
		printf("Welcome again!!!!");
	}
	}

	return 0;
}