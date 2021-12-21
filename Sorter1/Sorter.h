#include "Libraries.h"

class Sorter
{
    int size;
    int* arr;

public:

    Sorter(int* _arr, int _size);    
    void Show(int* _arr, int _size);    
    void SetArr(int* _arr);   
    void SetSize(int size);    
    ~Sorter();   
    const int* const GetArr() const;   
    const int const GetSize() const;    
    void Bubble(int size);    
    void Insert(int size);   
    void Select(int size);   
    void Quick(int size);   
    void Print();   
};

