#include <iostream>
using namespace std;

int arr[20];
int n;

void input () 
{
    
    while (true)
    {
    
    cout << "Input Maximum Leght : ";
    cin >> n;

    if (n <= 20) {
        break;
    } else {
        cout << "n is bigger than 20";
    }

    }
    cout << endl;
    cout << "======================="<< endl;
    cout << "Enter Elements of Array"<< endl;
    cout << "======================="<< endl;

    for (int i = 0; i < n; i++ ) {
        cout << "Data - " << i+1 << " : ";
        cin >> arr [i];
        cout << endl;
    }

}

void  display (){
    cout << endl;
    cout << "============"<< endl;
    cout << "Sorted Array"<< endl;
    cout << "============"<< endl;

    for (int i = 0; i < n; i++){
        cout << "Data " << i+1 << " : " << arr[i] << endl;

    }
}
void bubbleSortAlgoritma() {
    // set pass = 1,go to step 2

    int pass = 1;
    do{
    //repeat step 3 varying jfrom 0 to n-1 pass
        for ( int j = 0; j <= n-1 - pass; j++)
        { // atau <=
            
            // if the elements at index j is greater than the elements at index
            // j+1 swap yhe two elemnts
            if (arr[j] > arr [j + 1]){
                int tmp;
                tmp = arr [j];
                arr [j] = arr[j+1];
                arr [j+1] = tmp;
            }
        }
        pass = pass + 1;
        }while (pass <= n-1 );//pass< n
            // increment pass by 1
    
} 
    
int main(){

    input ();
    bubbleSortAlgoritma();
    display();


}
