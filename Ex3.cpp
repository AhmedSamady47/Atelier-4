#include <iostream>
#include <list>
using namespace std;

void TriBull(list<int>& lst) {
  bool sorted = false;
  while (!sorted) {
    sorted = true;
    for (auto it = lst.begin(); distance(it, lst.end()) > 1; it++) {
      if (*it > *next(it)) {
        iter_swap(it, next(it));
        sorted = false;
      }
    }
  }
}

void TriSelect(list<int>& lst) {
  for (auto it = lst.begin(); it != lst.end(); it++) {
    auto min = it;
    for (auto jt = it; jt != lst.end(); jt++) {
      if (*jt < *min) {
        min = jt;
      }
    }
    iter_swap(it, min);
  }
}

void TriInser(list<int>& lst) {
  for (auto it = lst.begin(); it != lst.end(); it++) {
    auto pos = it;
    auto val = *it;
    while (pos != lst.begin() && *prev(pos) > val) {
      *pos = *prev(pos);
      advance(pos, -1);
    }
    *pos = val;
  }
}


int main() {
    list<int> lst;

    while (true) {
    cout << "Entrez des entier (Entrez 0 pour arreté): ";
    int x;
    cin >> x;
    if (x == 0) {
        break;
    }
    lst.push_back(x);
    }

    TriBull(lst);
    cout << "Tri a bull: ";
    for (int x : lst) {
    cout << x << " ";
    }
    cout << endl;

    TriSelect(lst);
    cout << "Tri par selection: ";
    for (int x : lst) {
    cout << x << " ";
    }
    cout << endl;

    TriInser(lst);
    cout << "Tri par insertion: ";
    for (int x : lst) {
    cout << x << " ";
    }
    cout << endl;

    return 0;
}
