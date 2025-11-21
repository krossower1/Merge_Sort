#include "merge_sort.h"

int main() {
    vector<int> a = { 4, 12, 67, 24, 547653, 19, 2, -5, -1, 0  };
    vector<double> b = { 4.1, 12.3, 67, 24.12, 54.999, 19.6, 2.2, -5.9, -1, 0 };

    merge_sort<int> lista(a);
    merge_sort<double> lista2(b);
    merge_sort<char> lista3({ 'g', 'd', 'f', 'a', 'z', 'p', 'x', 'm', '0', '9', '&'});

    lista.mergesort();
    lista.print();

    lista2.mergesort();
    lista2.print();

    lista3.mergesort();
    lista3.print();

    return 0;
}