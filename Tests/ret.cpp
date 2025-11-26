#include "pch.h"
#include "mergesort.h"

template class merge_sort<int>;
template class merge_sort<double>;
template class merge_sort<char>;

template <typename skladowe>
vector<skladowe> merge_sort<skladowe>::ret() {
    return arr;
}