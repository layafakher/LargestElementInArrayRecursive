#include <iostream>  
using namespace std;  
int recursiveLargest(int [], int, int);
int main(){  
    int i, n;
    int arr[100];
    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;
    for(i = 0; i < n; ++i) {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> arr[i];
    }   
    cout<<recursiveLargest(arr,0,n-1);
    return 0;  
}  
int recursiveLargest(int array[], int start, int end ){
	int max;
	if ( array[ start] == end )
        return array[ end ];
    else{
        max = recursiveLargest(array,start+1,end);
        return array[start]>max ? array[start] : max;
    }
}




