#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	char name[100];
	char numbers[100];
	char email[100];
};
void printStudent(struct student arr[100],int currentSize){
	for(int i=0;i<currentSize;i++){
	printf("\nten cua sinh vien la %d",arr[i].name);
	printf("\nso dien thoai cua sinh vien la %s",arr[i].numbers);
	printf("\nemail cua sinh vien la %s",arr[i].email);
	printf("\n *************************************************\n");
	}	
}
int main(){
	struct student student1={"ronaldo","091334667643","ronaldocr7@gmail.com"};
	struct student student2={"lebanon","0379400945","thongocgiathuoc@gmail.com"};
	struct student studentList[100]={student1,student2};
	int currentSize=2;
	do{
		printf("\n************MENU*************");
		printf("\n1.thong tin sinh vien co trong cua hang");
		printf("\n2.cap nhat thong tin cua sach(them/sua/xoa)");
		printf("\n3.thoat");
		printf("\nnhap lua chon cua ban");
		int choice;
		scanf("%d",&choice);
		float sub_choice;
		char name1[100];
		char inputTitle[100];
		switch(choice){
			case 1:
			printStudent(studentList,currentSize);
				break;
			case 2:
				printf("******sub-menu*********");
				printf("\n2.1them thong tin cua sinh vien");
				printf("\n2.2sua thog tin cua sinh vien");
				printf("\n2.3xoa thong tin cua sinh vien");
				printf("\nnhap lua chon cua ban");
				scanf("%f",&sub_choice);
				if(sub_choice==2.1f){
					struct student newstudent;
					fflush(stdin);
					printf("\nnhap vao ten cua sinh vien ");
					gets(newstudent.name);
					printf("\nnhap vao so dien thoai cua sinh vien");
					gets(newstudent.numbers);
					printf("\nnhap vao email cua sinh vien la ");
					gets(newstudent.email);
					studentList[currentSize]=newstudent;
					currentSize++;
				}else if(sub_choice==2.2f){
					char name[100];
					fflush(stdin);
					printf("nhap vao ten cuon sach ma ban muon chinh sua ");
					gets(name);
					int updateIndex=-1;
					for(int i=0;i<currentSize;i++){
						if(strcmp(studentList[i].name,name)==0){
							updateIndex=i;
						}
				    }
						if(updateIndex!=-1){
						printf("\nten sinh vien muon  cap nhat lai ");
						gets(studentList[updateIndex].name);
						printf("\nso dien thai cua sinh vien muon cap nhat lai ");
						gets(studentList[updateIndex].numbers);
						printf("\nemailcua sinh vien muon cap nhat lai ");
						gets(studentList[updateIndex].email);
						}
				}else if(sub_choice==2.3f){
					char name[100];
					fflush(stdin);
					printf("nhap vao ten sinh vein ma ban muon xoa ");
					gets(name);
					int updateIndex=-1;
					for(int i=0;i<currentSize;i++){
						if(strcmp (studentList[i].name,name)==0){
							updateIndex=i;
						}
				    }
				    if(updateIndex!=-1){
				    	for(int j=updateIndex;j<currentSize;j++){
				    		studentList[j]=studentList[j+1];
						}
					}
					currentSize--;
				}else{
					printf("khong hop le");
				}
				break;
			case 3:
				exit(0);
			default:
			printf("\nvui long nhap lai tu 1 den 3");
		}
	}while(1==1);
}
