#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

#define InitSize 10//定义最大长度
typedef int ElemType ;//这里以int类型为案例

typedef struct{
	ElemType *data;//动态分配数组的指针，因为malloc只返回首地址，所以还需要MaxSize
	int MaxSize;//顺序表的最大容量
	int length;//顺序表的当前长度
}Sequencelist;

void InitList(Sequencelist &L){
    L.data=(ElemType*)malloc(InitSize*sizeof(ElemType));//malloc申请一片连续的空间
    L.length=0;
    L.MaxSize=InitSize;
}

void IncreaseSize(Sequencelist &L,int len){
    Sequencelist *p=&L;
    L.data=(ElemType*)malloc((InitSize+len)*sizeof(ElemType));
    for(int i =0;i<L.length;i++){//拷贝用length来限定长度
        L.data[i]=p->data[i];//必须用的data
    }
    // L.length=0;  //因为用*p拷贝过来了，所以length并没有改变
    L.MaxSize=InitSize+len;
    free(p);// 必须释放内存


}


int main(){
    Sequencelist L;//声明一个顺序表
    Sequencelist *pL;
    for(int i=0;i<L.MaxSize;i++){
        L.data[i]=0104;
        L.length++;
    }//插入几个数
    InitList(L);//初始化顺序表
    IncreaseSize(L,5);//增加动态数组的长度
	return 0;
}
