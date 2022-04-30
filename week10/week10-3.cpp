///week10-1.cpp一定要.cpp檔 模仿今天檔案，但改用檔案
///(1)檔案(2)排序分數大-小(3)使用物件class
#include <stdio.h>
class Record{///c++的物件，用class宣告，裡面有名字、分數包起來
public:      ///公開欄位可以被別人main()使用
    char name[30];
    int grade;
};
Record student[100];///有100比學生的資料
int main()
{
    FILE * fin = fopen("input.txt","r");
    int N;
    fscanf(fin, "%d" , &N);
    for(int i=0;i<N;i++){
       fscanf(fin,"%s %d" ,student[i].name,&student[i].grade);
    }
    for(int k=0;k<N-1;k++){
		for(int i=0;i<N-1;i++){
			if(student[i].grade<student[i+1].grade){///比大小不對就"交換"
				int temp=grade[i];
				grade[i]=grade[i+1];
				grade[i+1]=temp;

				strcpy(tempName, name[i]);///也是交換
				strcpy(name[i] ,name[i+1]);
				strcpy(name[i+1],tempName);
			}
                Record temp = student[i];
                student[i] =  student[i+1];
                student[i+1] = temp;
		}
	}
    for(int i=0;i<N;i++){
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}
