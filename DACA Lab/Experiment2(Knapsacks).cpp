#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int value, weight;

    Item(int value, int weight)
        : value(value), weight(weight)
    {
    }
};

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

//fractionalknapsack with greedy
double fractionalKnapsack(struct Item arr[],
    int N, int size)
{
    sort(arr, arr + size, cmp);

    int currentWeight = 0;

    double finalVal = 0.0;

    for (int i = 0; i < size; i++) {

        if (currentWeight + arr[i].weight <= N) {
            currentWeight += arr[i].weight;
            finalVal += arr[i].value;
        }

        else {
            int remain = N - currentWeight;
            finalVal += arr[i].value
                * ((double)remain
                    / arr[i].weight);
            break;
        }
    }

    return finalVal;
}


// 0-1 Knapsacks - function that returns search tree 0-1

int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int W, int wt[], int val[], int n)
{

    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);

    else
        return max(
            val[n - 1]
            + knapSack(W - wt[n - 1],
                wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}

int main()
{
    int W;
    srand(time(NULL));
    W = rand() % 100;

    Item arr[] = { { 103, 46 },
                   { 102, 18 },
                   { 108, 75 },
                   { 161, 95 },
                   { 152, 96 },
                   { 112, 54 },
                   { 122, 57 },
                   { 113, 47 },
                   { 179, 34 },
                   { 122, 73 } };

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Knapsacks Weight = " << W << " \n\n";

    cout << "Maximum profit earned via greedy fract= "
        << fractionalKnapsack(arr, W, size) << "\n\n";


    int val[] = { 103, 102, 108, 161,152,112 ,122,113,179,122 };
    int wt[] = { 46, 18, 75, 95,96,54,57,47,34,73 };


    cout << "Maximum profit earned  via 0-1 search tree= "
        << knapSack(W, wt, val, size);

    return 0;

}