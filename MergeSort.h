#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
* @brief Define the class holding the array and the workings of the MergeSort.
*
**/

template <typename skladowe>
class merge_sort {
private:
    vector<skladowe> arr;

    void dziel(vector<skladowe>& arr, int lewo, int prawo) {
        if (lewo >= prawo) return;
        int srodek = lewo + (prawo - lewo) / 2;
        dziel(arr, lewo, srodek);
        dziel(arr, srodek + 1, prawo);
        zwyciezaj(arr, lewo, srodek, prawo);
    }

    void zwyciezaj(vector<skladowe>& arr, int lewo, int srodek, int prawo) {
        int n1 = srodek - lewo + 1;
        int n2 = prawo - srodek;
        vector<skladowe> L(n1), R(n2);

        for (int i = 0; i < n1; i++)
            L[i] = arr[lewo + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[srodek + 1 + j];

        int i = 0, j = 0;
        int k = lewo;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            }
            else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
public:
    merge_sort(vector<skladowe> x) : arr(x) {}
    void mergesort();
    vector<skladowe> ret();
    void print();
};