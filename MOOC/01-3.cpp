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
    Position Last; /* �������Ա������һ��Ԫ�ص�λ�� */
};

List ReadInput(); /* ����ʵ�֣�ϸ�ڲ���Ԫ�ش��±�1��ʼ�洢 */
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
/* ��Ĵ��뽫��Ƕ������ */

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
