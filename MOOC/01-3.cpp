#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#define MAXSIZE 10
#define NotFound 0
using namespace std;
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标1开始存储 */
Position BinarySearch( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    Position P;

    //L = ReadInput();
    //scanf("%d", &X);
	int i;
	for(i=1;i<=5;i++){
		scanf("%d",&(L->Data[i]));
		printf("OK/n");
	} 
	//(*L).Data={1,2,3,4,5};
	cout<<L->Data[0];
	//L->Last = i;
	scanf("%d",X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}
/* 你的代码将被嵌在这里 */

Position BinarySearch( List L, ElementType X ){
	int f;
	int LowF,HighF;
	LowF = 1;
	HighF = L->Last;
	if(L->Data[HighF]==X) return HighF;
	if(L->Data[LowF]==X) return LowF;
	for(f = (HighF + LowF )/ 2; f!=HighF&&f!= LowF; ){
		if(L->Data[f]==X){
			return f;
		}
		else if(L->Data[f]>X){
			HighF = f;
			f = (f + LowF) / 2;
		}
		else if(L->Data[f]<X){
			LowF = f;
			f = (f + HighF) / 2;
		}
		
	}
	return NotFound;
}
