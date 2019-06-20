List Merge( List L1, List L2 ){
	List newNode;
	List t1,t2,now;
	t1 = L1 ->Next;
	t2 = L2 ->Next;
	newNode=(List)malloc(sizeof(struct Node)); 
	now = newNode;
	while(t1&&t2){
		if(t1->Data<=t2->Data){
			now ->Next = t1;
			now = t1;
			t1 = t1->Next;
		}
		else{
			now ->Next = t2;
			now = t2;
			t2 = t2 -> Next;
		}
			
	}
	now ->Next = t1?t1:t2;
	L1->Next = NULL;
	L2->Next = NULL;
	return newNode;

	
}


