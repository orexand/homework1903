
#include <iostream>
#include <algorithm>

using namespace std;


void fillArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 90 + 10;
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findMax(int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int* arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

float findMedian(int* arr, int size) {
    sort(arr, arr + size);
    if (size % 2 == 0) {
        return (float)(arr[size / 2] + arr[size / 2 - 1]) / 2;
    }
    else { 
        return (float)arr[size / 2];
    }
}

void fillArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}

void printArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int findMax(int** arr, int rows, int cols) {
    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}


int findMin(int** arr, int rows, int cols) {
    int min = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    return min;
}


float findMedian(int** arr, int rows, int cols) {
    int size = rows * cols;
    int* temp = new int[size];
    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp[k++] = arr[i][j];
        }
    }
    float median = findMedian(temp, size);
    delete[] temp;
    return median;
}


void fillArray(int*** arr, int dim1, int dim2, int dim3) {
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                arr[i][j][k] = rand() % 90 + 10;
            }
        }
    }
}

void printArray(int*** arr, int dim1, int dim2, int dim3) {
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int findMax(int*** arr, int dim1, int dim2, int dim3) {
    int max = arr[0][0][0];
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                if (arr[i][j][k] > max) {
                        max = arr[i][j][k];
                }
            }
        }
    }
    return max;
}

int findMin(int*** arr, int dim1, int dim2, int dim3) {
    int min = arr[0][0][0];
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                if (arr[i][j][k] < min) {
                    min = arr[i][j][k];
                }
            }
        }
    }
    return min;
}

float findMedian(int*** arr, int dim1, int dim2, int dim3) {
    int size = dim1 * dim2 * dim3;
    int* temp = new int[size];
    int k = 0;
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int l = 0; l < dim3; l++) {
                temp[k++] = arr[i][j][l];
            }
        }
    }
    float median = findMedian(temp, size);
    delete[] temp;
    return median;
}

int main() {
    const int size = 10;
    int arr[size];
    fillArray(arr, size);
    printArray(arr, size);
    cout << "Max: " << findMax(arr, size) << endl;
    cout << "Min: " << findMin(arr, size) << endl;
    cout << "Median: " << findMedian(arr, size) << endl;

    const int rows = 5, cols = 5;
    int** arr2d = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr2d[i] = new int[cols];
    }
    fillArray(arr2d, rows, cols);
    printArray(arr2d, rows, cols);
    cout << "Max: " << findMax(arr2d, rows, cols) << endl;
    cout << "Min: " << findMin(arr2d, rows, cols) << endl;
    cout << "Median: " << findMedian(arr2d, rows, cols) << endl;
    for (int i = 0; i < rows; i++) {
        delete[] arr2d[i];
    }
    delete[] arr2d;

    const int dim1 = 3, dim2 = 3, dim3 = 3;
    int*** arr3d = new int** [dim1];
    for (int i = 0; i < dim1; i++) {
        arr3d[i] = new int* [dim2];
        for (int j = 0; j < dim2; j++) {
            arr3d[i][j] = new int[dim3];
        }
    }
    fillArray(arr3d, dim1, dim2, dim3);
    printArray(arr3d, dim1, dim2, dim3);
    cout << "Max: " << findMax(arr3d, dim1, dim2, dim3) << endl;
    cout << "Min: " << findMin(arr3d, dim1, dim2, dim3) << endl;
    cout << "Median: " << findMedian(arr3d, dim1, dim2, dim3) << endl;
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            delete[] arr3d[i][j];
        }
        delete[] arr3d[i];
    }
    delete[] arr3d;

    return 0;
}