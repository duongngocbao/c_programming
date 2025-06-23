#include<stdio.h>
int main(){
    int arr []={1,2,3,4,5};
    int *ptr= arr;
    int max = * ptr;
    // tim so lon nhat
for (int i= 0;i<5;i++){
    if((*ptr + i)>max){
        max =(*ptr + i );
    }
}
printf (" so lon nhat la %d ", max);
return 0;
    

}
