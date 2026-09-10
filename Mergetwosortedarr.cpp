#include<iostream>
using namespace std;
int main(){
    int nums1[]={1,3,5,7};
    int nums2[]={2,4,6};
    int nums3[7]={0};
    int n1=4;
    int n2=3;
    int n3=7;
    int i=0;
    int j=0;
    int k=0;
    while(i<n1&&j<n2){
        if(nums1[i]<nums2[j]){
            nums3[k]=nums1[i];
            k++;
            i++;
        }
        else{
             nums3[k]=nums2[j];
            k++;
            j++; 
        }
    }
    while (i<n1)
    {
         nums3[k]=nums1[i];
            k++;
            i++; 
    }
    while (i<n2)
    {
         nums3[k]=nums2[j];
            k++;
            j++; 
    }
   cout<<"the merge of sorted array"<<endl;
   for(int l=0;l<n3;l++){
    cout<<nums3[l]<<" ,";
   } 
}