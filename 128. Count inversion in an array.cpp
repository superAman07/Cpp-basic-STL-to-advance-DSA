#include<iostream>
using namespace std;

int mergeAndCount(int a[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = a[l + i];
    for (int j = 0; j < n2; j++)
        right[j] = a[m + 1 + j];

    int i = 0, j = 0, k = l, count = 0;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            a[k++] = left[i++];
        } else {
            a[k++] = right[j++];
            count += (n1 - i); // Count inversions
        }
    }

    while (i < n1) {
        a[k++] = left[i++];
    }

    while (j < n2) {
        a[k++] = right[j++];
    }

    return count;
}

int mergeSortAndCount(int a[], int l, int r) {
    int count = 0;
    if (l < r) {
        int m = l + (r - l) / 2;

        count += mergeSortAndCount(a, l, m);
        count += mergeSortAndCount(a, m + 1, r);

        count += mergeAndCount(a, l, m, r);
    }
    return count;
}

int main() {
    int a[]{2, 4, 1, 3, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int inversions = mergeSortAndCount(a, 0, n - 1);
    cout << "Number of inversions: " << inversions << endl;

    return 0;
}
