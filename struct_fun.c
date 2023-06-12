#include<stdio.h> 
struct my_struct{
	int roll_no;

	char name[20];
};
struct my_struct struct_r(struct my_struct*);
struct my_struct struct_print(struct my_struct*);
int main()
{
	struct my_struct s;
	struct_r(&s);
	struct_print(&s);
}
struct my_struct struct_r(struct my_struct *s1)
{
	printf("enter a roll_number:\n");
	scanf("%d",&s1->roll_no);
	printf("enetr name:\n");
	scanf("%s",s1->name);
//	struct_print(s1);
}
struct my_struct struct_print(struct my_struct *s2)
{
	printf("roll_number:%d\n",s2->roll_no);
	
	printf("name:%s\n",s2->name);
}
