///week10-1.cpp�@�w�n.cpp�� �ҥ餵���ɮסA������ɮ�
///(1)�ɮ� (2)�ƧǤ��Ƥj-�p (3)�ϥΪ���class (4)�@��ѨMsort
#include <stdio.h>
#include <vector>///include�᭱�S��h
#include <algorithm>

class Record{///c++������A��class�ŧi
public:///���}���i�H�Q�O�Hmain()�ϥ�
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
