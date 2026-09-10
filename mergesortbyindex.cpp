#include <iostream>
using namespace std;
void merge(int* arr, int s, int e,int* inver) {
    int mid = (s + e) / 2;
    
    int i = s;       // left part index
    int j = mid + 1; // right part index
    int k = 0;

    int temp[e - s + 1];

    while (i <= mid && j <= e) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
      
        } else {
            temp[k++] = arr[j++];
                  (*inver)+=(mid - i + 1);
            
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= e) {
        temp[k++] = arr[j++];
    }
//      for (int v = 0; v < k; v++) {
////        arr[s+x] = temp[x];
//        cout<<temp[v]<<",";
//    }
    cout<<endl;

    // copy back to original array
    for (int x = 0; x < k; x++) {
        arr[s+x] = temp[x];
       
    }
//    cout<<endl;
}
void mergesort(int* arr,int s,int e,int* inver){
	

   if(s>=e){
   	return ;
   }
   int mid=(s+e)/2;
   mergesort(arr,s,mid,inver);
   mergesort(arr,mid+1,e,inver);
   merge(arr,s,e,inver);
}
int main(){
int	numbers[]={12,8,3,5};
int n=4;
int s=0;
int e=3;
int inversionnumber=0;
mergesort(numbers,s,e,&inversionnumber);
cout<<"the tottal inversion is"<<inversionnumber<<endl;
for(int j=0;j<n;j++){
//	cout<<"i am running"<<" "<<endl;
	cout<<numbers[j]<<",";
	
}	
}
