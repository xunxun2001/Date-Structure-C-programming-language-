#define MaxSize 10//定义最大长度
typedef int ElemType ;//这里以int类型为案例

typedef struct{
	ElemType data[MaxSize];//用静态的“数组”存放数据元素
	int length;//顺序表当前的长度
}Sequencelist;
