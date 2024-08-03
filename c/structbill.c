#include<stdio.h>
//print bill with structure...
struct bill{
      int rate,qty,amt,dis,billamt,gst;
	  int byer[10];
	  float totalamt;
};

int main(){
    struct bill bil;
	for(int i=0;i<5;i++){
	  bil.byer[i]=i+1;
	  
	  printf("enter details for bill: %d \n",i+1);
	  printf("Enter the rate:");
	  scanf("%d",&bil.rate);
	  
	  printf("Enter the qty:");
	  scanf("%d",&bil.qty);
		
	  printf("rate: %d \n",bil.rate);
	  printf("qty:%d \n",bil.qty);
	  
	  bil.amt=bil.rate*bil.qty;
	  printf("amount: %d \n",bil.amt);
	  
	  bil.dis=bil.amt*5/100;
	   printf("discount: %d \n",bil.dis);
	  
	   bil.billamt=bil.amt-bil.dis;
	    printf("bill amount: %d \n",bil.billamt);
	  
		bil.gst=bil.billamt*18/100;
		printf("gst: %d \n",bil.gst);
	   
		bil.totalamt=bil.billamt+bil.gst;
		printf("Net Bill: %2.f \n",bil.totalamt);
		
	}
	
}