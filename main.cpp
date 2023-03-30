#include <iostream>
#include <time.h>
#include <cstdlib>
#include <vector>
#include <chrono> // required for time measurement
using namespace std;


/*int partitionArr(vector<int> &arr,int low,int high){
    /*int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[high] = arr[i+1];
    arr[i+1] = pivot;
    return i+1;*/

    /*int pivot = arr[low];
    int i = high+1;
    for(int j =high;j>low;j--){

        if(arr[j]>= pivot){
            i--;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

        }

    }

    arr[low] = arr[i-1];
    arr[i-1] = pivot;
    return i-1;*/


    int pivot = arr[low];
    int  i = low;

    for(int j =low+1;j<=high;j++){

        if(arr[j]<=pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

        }

    }

    arr[low] = arr[i];
    arr[i] = pivot;
    return i;



}





void quickSort(vector<int> &arr,int low,int high){
    if(low<high){
        int index = partitionArr(arr,low,high);
        quickSort(arr,low,index-1);
        quickSort(arr,index+1,high);
    }
}





/*int main() {



    vector<int> arr ;
    int sizeArr;
    cout<<"total elements in array : ";
    cin>>sizeArr;
    for(int i=0;i<sizeArr;i++){
        arr.push_back(rand());
    }
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<arr.size()-1<<endl;
    quickSort(arr,0,(sizeArr-1));

    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;


    /*cout<<endl;

    double time_start = clock();

    quickSort(arr,0,(arr.size()-1));

    //bubbleSort(arr);

    double time_end = clock();



    double spent_time = (time_end - time_start)/1000;
    cout<<spent_time<<endl;

    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;*/



    return 0;*/
}
*/*/
