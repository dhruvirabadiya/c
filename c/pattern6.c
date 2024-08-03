 #include<stdio.h>
 /*
   2 2 2 2 2
   4 4 4 4 4
   6 6 6 6 6
   8 8 8 8 8
   10 10 10 10 10
 */
 int main(){
     for(int i=1;i<=10;i++){
	    if(i%2==0){
	    for(int j=1;j<=5;j++){
	    printf(" %d ",i);
	   }
	   printf("\n");
	    }
	}
}