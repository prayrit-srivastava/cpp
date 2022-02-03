//iterative meathod
#include <iostream>
int binarysearch(int*,int,int);
int binarysearch(int* arr,int n,int key){
  int h = n ,l=0;
  int mid;
  while(h>=l)
  {
    mid = (h+l)/2;
    if(key == mid)
      return mid;
    if(key>mid)
      l = mid+1;
    else
      h = mid-1;
  }
  return 0;
}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int key = 1 ;
int n = sizeof(arr);
std::cout<<binarysearch(arr,n,key)<<std::endl;
}












//recursive meathod
#include <iostream>
int binarysearch(int*,int,int,int);
int binarysearch(int* arr,int l,int h,int key){
  int mid;
  mid = (h+l)/2;
  while(h>l){
  if(key == mid)
    return mid;
  if(key>mid)
      return binarysearch(arr,mid+1,h,key);
    else
      return binarysearch(arr,0,mid-1,key);
  }
  return 0;
}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int key = 1 ;
int l=0;
int h = sizeof(arr);
std::cout<<binarysearch(arr,l,h,key)<<std::endl;
}