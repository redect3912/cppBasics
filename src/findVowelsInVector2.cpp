#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <char> vec {'q','w','r','t','y','p','s','d','f','e','g'}; 

    int i{0};
    bool vowelFound{false};

    if(!vec.empty()) {
        do {
            if (vec[i] == 'a' || vec[i] == 'e' || vec[i] == 'i' || vec[i] == 'o' || vec[i] == 'u' ) {
                vowelFound = true;
            } else {
                ++i;
            }
        } while (!vowelFound && i < vec.size());
    }

    if (vowelFound) {
        cout << "Vowel found: \"" << vec[i] << "\" at index " << i << endl;
    } else {
        cout << "No vowel was found" << endl;
    }
    return 0;
}