#include<cstring>
#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;

#define MaxSize 10//������󳤶�
typedef int ElemType ;//������int����Ϊ����

typedef struct{
	ElemType data[MaxSize];//�þ�̬�ġ����顱�������Ԫ��
	int length;//˳���ǰ�ĳ���
}Sequencelist;

void Initlist(Sequencelist &L){
	for(int i=0;i<MaxSize;i++)	L.data[i]=0;//��ʼ������Ԫ��Ϊ0 
	L.length=0;//˳����ʼ����Ϊ0 
}

int main(){
	Sequencelist L;
	Initlist(L);
	
	return 0;
}
