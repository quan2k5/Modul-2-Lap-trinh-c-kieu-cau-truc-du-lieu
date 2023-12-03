#include<stdio.h>
#include<string.h>
struct student{
	char name[100];
	int age;
	char numbers[100];
	char email[100];
};
void inputStudent(struct student &st){
	strcpy(st.name,"le anh quan");
	st.age=18;
	strcpy(st.numbers,"0915199074");
	strcpy(st.email,"lanhquan130@gmail.com");
}
void outputStudent(struct student st){
	printf("\nten cua sinh vien la %s",st.name);
	printf("\ntuoi cua sinh vien la %d",st.age);
	printf("\nso dien thoai cua sinh vien la %s",st.numbers);
	printf("\ndia chi email cua sinh vien la %s",st.email);
}
int main(){
	struct student st;
	inputStudent(st);
	outputStudent(st);
}
