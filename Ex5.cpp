#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <array>
using namespace std;

template <typename IteratorType, typename Temp>
bool recherche(IteratorType begin, IteratorType end, const Temp& val) {
    for (auto it = begin; it != end; ++it) {
        if (*it == val) {
            return true;
        }
    }
    return false;
}

int main(){
set<int> monSet;
for (int i = 1; i <= 100; ++i) {
    monSet.insert(i);
}

vector<string> vec{"bonjour", "lst", "gi", "fstt"};
if(recherche(vec.begin(), vec.end(), "fstt") == 1){
    cout << "'fstt' existe dans le vecteur" << endl;
}

list<int> lst{1, 2, 3, 4, 5};
if(recherche(lst.begin(), lst.end(), 3) == 1){
    cout << "l'entier 3 existe dans la liste" << endl;
}

array<float, 5> arr{{1.0, 2.0, 3.0, 4.0, 5.0}};
if(recherche(lst.begin(), lst.end(), 3.0) == 1){
    cout << "le float 3.0 existe dans le tableau classique" << endl;
}
return 0;
}