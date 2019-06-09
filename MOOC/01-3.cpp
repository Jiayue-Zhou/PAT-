Position BinarySearch( List L, ElementType X ){
	int f;
	int LowF,HighF;
	LowF = 1;
	HighF = L->Last;
	f = (HighF + LowF )/ 2;
	//if(L->Data[HighF]==X) return HighF;
	//if(L->Data[LowF]==X) return LowF;
	while( HighF>=LowF ){
		if(L->Data[f]==X){
			return f;
		}
		else if(L->Data[f]>X){
			HighF = f - 1 ;
			f = (HighF + LowF) / 2;
		}
		else if(L->Data[f]<X){
			LowF = f + 1;
			f = (LowF + HighF) / 2;
		}
		
	}
	return NotFound;
}
