#include <iostream>
#include <vector>
#include <pthread.h> // for creating threads
#include <algorithm> // so we don't have to implement our own sort()

struct Sublist {  //our sublists, holds array and the start and end indices of them
    std::vector<int>* arr;  
    int start;
    int end;
};

void* sortSublist(void* arg) {
    Sublist* sublist = (Sublist*)arg;
    std::sort(sublist->arr->begin() + sublist->start, sublist->arr->begin() + sublist->end + 1);
    pthread_exit(nullptr);
    return 0;
}

//void* mergeSublists(void* arg) { //merge algo here

//}



int main() {

    std::vector<int> arr = {7, 12, 19, 3, 18, 4, 2, -5, 6, 15, 8}; //array provided from doc
    int size = arr.size();
    
    // Divide array into two nearly equal halves
    int mid = size / 2;

    // Create sublist structures
    Sublist Lsublist = {&arr, 0, mid};
    Sublist Rsublist = {&arr, mid + 1, size - 1};

    //s

}