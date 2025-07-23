#include <iostream>
#include <vector>

using namespace std;

int main () {
    
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
   
    
    int count{0};
    for (int elements : vec) { // use range based for loop to go over all element and determine how many ints devisible by 3 or 5 in vector vec
        if (elements % 3 == 0 || elements % 5 == 0) {
            count += 1;
        }
    }

    cout << count << " elements of vector vec are devisible by 3 or 5" << endl;
    

}