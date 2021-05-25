#ifndef HEAP_H
#define HEAP_H

#include "arraysequence.h"
#include "arraysequence.cpp"
#include <string>

template<class T>
class Heap {
    Sequence<T> *_heap;

    void SiftDown(int index);
    void SiftUp(int index);
public:
    //Constructors
    Heap();
    Heap(const Sequence<T> &seq);
    Heap(Heap<T> &heap);

    //Decomposition
    void Clear();
    int GetLength() const;

    //Operations
    void Insert(T &value);
    T &GetMax();
    T &GetByIndex(int index);
    T &operator[] (const int index);
    T &ExtractMax();
    bool CheckEntry(T &value);
    void DeleteByValue(T &value);
    std::string SavePairsInString();

    template<class R>
    friend std::ostream& operator<<(std::ostream &out, const Heap<R> &h);

    //Destructor
    ~Heap();

};

#endif // HEAP_H
