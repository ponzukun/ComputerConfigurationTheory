#include <iostream>
#include <vector>

void printArray(const std::vector<int>& arr) {
    std::cout << "入力値:";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << " A[" << i << "]=" << arr[i];
    }
    std::cout << std::endl;
}

void findMinMaxWithSmallerIndex(const std::vector<int>& arr, int* min, int* max, int* min_index, int* max_index) {
    *min = arr[0];
    *max = arr[0];
    *min_index = 0;
    *max_index = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > *max) {
            *max = arr[i];
            *max_index = i;
        }
        if (arr[i] < *min) {
            *min = arr[i];
            *min_index = i;
        }
    }
}

void findMinMaxWithLargerIndex(const std::vector<int>& arr, int* min, int* max, int* min_index, int* max_index) {
    *min = arr[0];
    *max = arr[0];
    *min_index = 0;
    *max_index = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] >= *max) {
            *max = arr[i];
            *max_index = i;
        }
        if (arr[i] <= *min) {
            *min = arr[i];
            *min_index = i;
        }
    }
}

void findMinMaxWithIndexes(const std::vector<int>& arr, int* min, int* max, std::vector<int>* min_indexes, std::vector<int>* max_indexes) {
    *min = arr[0];
    *max = arr[0];
    min_indexes->clear();
    max_indexes->clear();

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > *max) {
            *max = arr[i];
            max_indexes->clear();
            max_indexes->push_back(i);
        }
        else if (arr[i] == *max) {
            max_indexes->push_back(i);
        }
        if (arr[i] < *min) {
            *min = arr[i];
            min_indexes->clear();
            min_indexes->push_back(i);
        }
        else if (arr[i] == *min) {
            min_indexes->push_back(i);
        }
    }
}

int main() {
    std::vector<int> A = { 3, 5, 1, 10, 9, 2, 6, 10, 8, 1 };
    int min, max, min_index, max_index;

    //課題(1)
    printArray(A);
    findMinMaxWithSmallerIndex(A, &min, &max, &min_index, &max_index);

    std::cout << "最大値=" << max << ", 最小値=" << min << std::endl;
    std::cout << "最大値インデックス " << max_index << std::endl;
    std::cout << "最小値インデックス " << min_index << std::endl;
    std::cout << std::endl;


    //課題(2)
    printArray(A);
    findMinMaxWithLargerIndex(A, &min, &max, &min_index, &max_index);

    std::cout << "最大値=" << max << ", 最小値=" << min << std::endl;
    std::cout << "最大値インデックス " << max_index << std::endl;
    std::cout << "最小値インデックス " << min_index << std::endl;
    std::cout << std::endl;


    //課題(3)
    std::vector<int> min_indexes, max_indexes;
    printArray(A);
    findMinMaxWithIndexes(A, &min, &max, &min_indexes, &max_indexes);

    std::cout << "最大値=" << max << ", 最小値=" << min << std::endl;

    std::cout << "最大値インデックス ";
    for (int index : max_indexes) {
        std::cout << index << ", ";
    }
    std::cout << std::endl;

    std::cout << "最小値インデックス ";
    for (int index : min_indexes) {
        std::cout << index << ", ";
    }
    std::cout << std::endl;

    return 0;
}
