//knapsack
#include<bits/stdc++.h>
using namespace std;
 
struct item{
    int weight,price;
    double PUprice;
}arr[10004];
 
bool cmp(item a, item b){
    if(a.PUprice>=b.PUprice)return true;
    else return false;
}
 
int main(){
    int KScapacity,items;
    double profit=0.0;
    scanf("%d %d",&KScapacity,&items);
    for(int i=0;i<items;i++){
        scanf("%d",&arr[i].weight);
    }
    for(int i=0;i<items;i++){
        scanf("%d",&arr[i].price);
        arr[i].PUprice=(arr[i].price*1.0)/arr[i].weight;
    }
    sort(arr,arr+items,cmp);
    for(int i=0;i<items;i++){
        if(arr[i].weight>=KScapacity){
            profit=profit+arr[i].PUprice*KScapacity;
            arr[i].weight=arr[i].weight-KScapacity;
            KScapacity=0;
            break;
        }
        else{
            KScapacity=KScapacity-arr[i].weight;
            profit=profit+arr[i].price;
        }
    }
    printf("\nprofit = %.5lf\n",profit);
 
    return 0;
}
