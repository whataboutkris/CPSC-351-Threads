#include <iostream>
#include <vector>
#include <pthread.h> // for creating threads

struct Sublist {  //our sublists, holds array and the start and end indices of them
    std::vector<int>* arr;  
    int start;
    int end;
};

void* sortSublist(void* arg) {  //sorting algo here



}

void* mergeSublists(void* arg) { //merge algo here

}



int main() {
    std::vector<int> arr = {7, 12, 19, 3, 18, 4, 2, -5, 6, 15, 8}; //array provided from doc
    int size = arr.size();
    
    // Divide array into two lists (our sublists) into nearly equal halves
    int mid = size / 2;

    Sublist LsubList = {&arr, 0, mid};
    Sublist RsubList = {&arr, mid + 1, size - 1};

