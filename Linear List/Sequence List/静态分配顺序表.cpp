#include<cstring>
#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;

#define MaxSize 10//定义最大长度
typedef int ElemType ;//这里以int类型为案例

typedef struct{
	ElemType data[MaxSize];//用静态的“数组”存放数据元素
	int length;//顺序表当前的长度
}Sequencelist;

void Initlist(Sequencelist &L){
	for(int i=0;i<MaxSize;i++)	L.data[i]=0;//初始化数组元素为0 
	L.length=0;//顺序表初始长度为0 
}

int main(){
	Sequencelist L;
	Initlist(L);
	
	return 0;
}
