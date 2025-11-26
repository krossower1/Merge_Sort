#include "pch.h"
#include "mergesort.h"

template class merge_sort<int>;
template class merge_sort<double>;
template class merge_sort<char>;

/**
* @brief Print the element on the screen
*
**/

template <typename skladowe>
void merge_sort<skladowe>::print() {
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}