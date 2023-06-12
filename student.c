#include<stdio.h>
#include<stdlib.h>
struct student{
	int student_Id;
	char name[20];
	char DOB[10];

};
struct student reading(struct student *s,int n);
int main(void){
	int n;
	FILE *fp;
	scanf("%d",&n);
	struct student *s;
	s=(struct student*)malloc(n*sizeof(struct student));
	reading(s,n);
	fp=fopen("student_record.txt","w");
	for(int i=1;i<=n;i++)
	{
		fprintf(fp,"%s%05d\t %s\n",s->name,s->student_Id,s->DOB);
		s++;
	}
	fclose(fp);
	return 0;
}
struct student reading(struct student *s,int n){
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&s->student_Id);
		scanf("%s",s->name);
		scanf("%s",s->DOB);
		s++;
	}

}
