///week10-1.cpp�@�w�n.cpp�� �ҥ餵���ɮסA������ɮ�
///(1)�ɮ�(2)�ƧǤ��Ƥj-�p(3)�ϥΪ���class
#include <stdio.h>
class Record{///c++������A��class�ŧi�A�̭����W�r�B���ƥ]�_��
public:      ///���}���i�H�Q�O�Hmain()�ϥ�
    char name[30];
    int grade;
};
Record student[100];///��100��ǥͪ����
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
			if(student[i].grade<student[i+1].grade){///��j�p����N"�洫"
				int temp=grade[i];
				grade[i]=grade[i+1];
				grade[i+1]=temp;

				strcpy(tempName, name[i]);///�]�O�洫
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
