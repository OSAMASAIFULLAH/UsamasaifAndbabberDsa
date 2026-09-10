#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int>& nums1, vector<int>& nums2)
{
    int i = nums1.size() - nums2.size() - 1;
    int j = nums2.size() - 1;
    int k = nums1.size() - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }

        k--;
    }

    while (j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}
int main(){
vector<int> nums1={1,2,3,0,0,0};
vector<int> nums2={2,5,6};
Merge(nums1,nums2);
cout<<"hi";
for (int i = 0; i < nums1.size(); i++)
{
    cout<<nums1[i]<<",";
}
}