#include <iostream>
#include <vector>

using namespace std;

class MergeSort {
private:
    vector<int> arr;

    void dziel(vector<int>& arr, int lewo, int prawo) {
        if (lewo >= prawo) return;
        int srodek = lewo + (prawo - lewo) / 2;
        dziel(arr, lewo, srodek);
        dziel(arr, srodek + 1, prawo);
        zwyciezaj(arr, lewo, srodek, prawo);
    }
public:
    MergeSort(vector<int>x) { arr= x; }

    void mergesort() {
        int lewo = 0;
        int prawo = arr.size() - 1;
        dziel(arr, lewo, prawo);
    }
    
    void zwyciezaj(vector<int>& arr, int lewo, int srodek, int prawo) {

        int n1 = srodek - lewo + 1;
        int n2 = prawo - srodek;

        vector<int> L(n1), R(n2);

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

    void print() {
        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    MergeSort lista({ 4, 12, 67, 24, 54, 19, 2, 5 });

    lista.mergesort();
    lista.print();

    return 0;
}