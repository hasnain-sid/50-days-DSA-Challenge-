//User function Template for C++
void countSort(int arr[], int n, int place){
    int count[10] = {0};
    int ans[n];
    for(int i=0;i<n;i++){
        int place_value = (arr[i]/place)%10;
        count[place_value]++;
    }
    for(int i=1;i<10;i++){
        count[i] = count[i] + count[i-1];
    }
    
    for(int i=n-1;i>=0;i--){
        int place_value = (arr[i]/place)%10;
        ans[count[place_value]-1] = arr[i];
        count[place_value]--;
    }
    for(int i=0;i<n;i++){
        arr[i] = ans[i];
    }
}

void radixSort(int arr[], int n) 
{ 
   // code here
   int max_ele = arr[0];
   for(int i=0;i<n;i++){
       max_ele = max(max_ele,arr[i]);
   }

   for(int place = 1; max_ele/place > 0; place *= 10){
       
       countSort(arr,n,place);
   }
} 