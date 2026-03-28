#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	int age;


};
void write();
void read();
void main();


void main()
{
	write();
	getch();
	read();


	getch();





}
void write()
{

	struct student s;
	FILE *fp;
	int i;
	clrscr();
	fp=fopen("sfile.txt","w");
	for(i=1;i<=3;i++)
	{
		printf("\n enter roll number "); scanf("%d",&s.rno);
		printf("\n enter age "); scanf("%d",&s.age);
		fprintf(fp, "%d %d ",s.rno,s.age);


	}

	fclose(fp);

}
void read()
{
	struct student s;
	FILE *fp;
	int i;
	clrscr();
	fp=fopen("sfile.txt","r");
	for(i=1;i<=3;i++)
	{
	      fscanf(fp,"%d %d ",&s.rno,&s.age);
		printf("\nRoll number :: %d \n Age==%d",s.rno,s.age);


	}





}