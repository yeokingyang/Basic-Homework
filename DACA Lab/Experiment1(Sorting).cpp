#include <iostream>
#include <random>

using namespace std;

template<typename T>
void quickSort(T[], int, int);
template <class T>
void insertionSort(T arrray[], int size);
template<typename T>
int partition(T[], int, int);
template<typename T>
void swapItm(T&, T&);


int main() {
    cout << "Comparison between quicksort and insertion sort\n";
    cout << "============================================\n";

    int val, val2;
    const int SIZE = 5;
    int listA[SIZE], listB[SIZE];

    for (int i = 0; i < SIZE; i++) {
        val = rand() % 40;
        val2 = val;
        listA[i] = abs(val);
        listB[i] = abs(val2);
    }


    cout << "Before Sorting \"Integers\",\n\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Item [" << i + 1 << "] : " << listA[i] << "\n";
    }

    quickSort(listA, 0, SIZE - 1);

    cout << "--------------------------------------------\n";

    cout << "After Sorting with quicksort \"Integers\",\n\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Item [" << i + 1 << "] : " << listA[i] << "\n";
    }
    cout << endl;

    cout << "--------------------------------------------\n";

    cout << "After Sorting with insertion sort \"Integers\",\n\n";
    insertionSort(listB, SIZE);
    for (int i = 0; i < SIZE; i++) {
        cout << "Item [" << i + 1 << "] : " << listB[i] << "\n";
    }
    cout << endl;

    return 0;
}


template<typename T>
void quickSort(T arr[], int s, int e) {
    int pivot;

    if (s < e) {

        pivot = partition(arr, s, e);

        quickSort(arr, s, pivot - 1);

        quickSort(arr, pivot + 1, e);
    }
}

template<typename T>
int partition(T arr[], int s, int e) {

    random_device                  randDev;
    mt19937                        gen(randDev());
    uniform_int_distribution<int>  dist(s, e);

    int p = dist(gen);

    swapItm(arr[p], arr[s]);


    p = s;


    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= arr[s]) {

            p++;

            swapItm(arr[p], arr[i]);
        }
    }


    swapItm(arr[s], arr[p]);

    return p;
}


template<typename T>
void swapItm(T& a, T& b) {
    T c = a;
    a = b;
    b = c;
}

template <class T>
void insertionSort(T array[], int size)
{
    T temp = array[0];
    for (int i = 1; i < size; i++)
    {
        temp = array[i];
        int j = 0;
        for (j = i; j > 0; j--)
            if (temp < array[j - 1])
                array[j] = array[j - 1];
            else break;
        array[j] = temp;
    }
}

