///week10-1.cpp一定要.cpp檔 模仿今天檔案，但改用檔案
///(1)檔案 (2)排序分數大-小 (3)使用物件class (4)一行解決sort
#include <stdio.h>
#include <vector>///include後面沒有h
#include <algorithm>

class Record{///c++的物件，用class宣告
public:///公開欄位可以被別人main()使用
    char name[30];
    int grade;
};
bool compare(Record a,Record b){
        return(a.grade>b.grade);
}
int main()
{
    FILE * fin = fopen("input.txt","r");
    int N;
    fscanf(fin, "%d" , &N);
    std::vector<Record> student(N);
    for(int i=0;i<N;i++){
       fscanf(fin,"%s %d" ,student[i].name,&student[i].grade);
    }

    std::sort(student.begin(),student.end(),compare);

    for(int i=0;i<N;i++){
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}
