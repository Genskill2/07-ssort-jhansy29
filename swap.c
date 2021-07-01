void swap_max(int arr[], int l, int n) {
    int max=0 ,x,y=0;
     x=arr[n];
  for(int i=n;i<l;i++){
   if(arr[i]>max){
     max=arr[i];
       y=i;
     }
    }
   /*for(int j=n;j<l;j++){
       if(arr[j]==max){
       y=j;
       }
   }*/
    if(max!=x){
    arr[y]=x;
    arr[n]=max;
    }
          
   }
  
void ssort(int arr[],int l){
    for(int i=0;i<l;i++){
        swap_max(arr,l,i);
    }
}
     
  
 
