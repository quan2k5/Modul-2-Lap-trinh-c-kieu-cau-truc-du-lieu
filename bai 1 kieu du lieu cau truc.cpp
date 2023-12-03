#include<stdio.h>
#include<string.h>
struct student{
	char name[100];
	int age;
	char numbers[100];
	char email[100];
};
int main(){
	struct student st; 
	strcpy(st.name,"le anh quan");
	st.age=19;
	strcpy(st.numbers,"0915199074");
	strcpy(st.email,"lanhquan130@gmail.com");
	printf("ten cua sinh vien la %s\n",st.name);
	printf("tuoi cua sinh vien la %d\n",st.age);
	printf("so dien thoai cua sinh vien la %s\n",st.numbers);
	printf("dia chi email cua sinh vien la %s\n",st.email);
}
