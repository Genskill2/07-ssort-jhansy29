void swap_max(int arr[], int l, int n) {
    int max=0 ,x,y;
     x=arr[n];
  for(int i=n;i<l;i++){
   if(arr[i]>max){
     max=arr[i];
     }
    }
   for(int j=n;j<l;j++){
       if(arr[j]==max){
       y=j;
       }
   }
    arr[y]=x;
    arr[n]=max;
          
   }
  

     
  
 
