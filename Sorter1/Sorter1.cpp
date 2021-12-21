// Sorter.cpp : Создать класс Sorter, который будет содержать в себе статические методы, реализующие разные алгоритмы сортировки одномерных массивов 
//(Bubble, Insert, Select, Quick). Массивы могут быть любого типа, любых размеров(по количеству элементов).

#include "Sorter.h"

Sorter::Sorter(int* _arr, int _size)
    {
        Show(_arr, _size);
    }
    void Sorter::Show(int* _arr, int _size)
    {
        if (_size <= 0)
        {
            arr = nullptr;
            size = 0;
            return;
        }
        size = _size;
        arr = new int[_size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = _arr[i];
        }
    }
    void Sorter::SetArr(int* _arr)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = _arr[i];
        }
    }
    void Sorter::SetSize(int size)
    {
        this->size = size;
    }
    Sorter::~Sorter()
    {
        if (arr != nullptr) delete[] arr;
    }
    const int* const Sorter::GetArr() const
    {
        return arr;
    }
    const int const Sorter::GetSize() const
    {
        return size;
    }
    void Sorter::Bubble(int size)
    {
        int tmp = 0;
        for (int i = 0; i < size; i++) {
            for (int j = (size - 1); j >= (i + 1); j--) {
                if (arr[j] < arr[j - 1]) {
                    tmp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = tmp;
                }
            }
        }
    }
    void Sorter::Insert(int size)
    {
        int value = 0;
        int i = 0;
        for (int j = 1; j < size; j++) {
            value = arr[j];
            i = j - 1;
            while (i >= 0 && arr[i] > value) {
                arr[i + 1] = arr[i];
                i = i - 1;
                arr[i + 1] = value;
            }
        }
    }
    void Sorter::Select(int size)
    {
        int j = 0;
        int tmp = 0;
        for (int i = 0; i < size; i++) {
            j = i;
            for (int k = i; k < size; k++) {
                if (arr[j] > arr[k]) {
                    j = k;
                }
            }
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    void Sorter::Quick(int size)
    {
        int m = 0;
        int index = size / 2;
        int i, j = 0, k = 0;
        if (size > 1) {
            int* start = new int[size];
            int* end = new int[size];
            m = arr[index];
            for (i = 0; i < size; i++) {
                if (i != index) {
                    if (arr[i] < m) {
                        start[j] = arr[i];
                        j++;
                    }
                    else {
                        end[k] = arr[i];
                        k++;
                    }
                }
            }
        }
    }
    void Sorter::Print()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }