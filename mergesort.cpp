#include "pch.h"
#include "mergesort.h"

template class merge_sort<int>;
template class merge_sort<double>;
template class merge_sort<char>;

/**
* @brief Initiate the MergeSort
*
**/

template <typename skladowe>
void merge_sort<skladowe>::mergesort() {
    int lewo = 0;
    int prawo = arr.size() - 1;
    dziel(arr, lewo, prawo);
}