#include "Sorter.h"

int main()
{
    srand(time(0));
    const int size = 10;
    int arr[size];
    cout << "Array \n";
    for (int i = 0; i < size; i++) {

        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << "\n";

    Sorter* s = new Sorter(arr, 10);
    cout << "Bubble \n";
    s->Bubble(size);
    s->Print();
    cout << "Insert \n";
    s->Insert(size);
    s->Print();
    cout << "Select \n";
    s->Select(size);
    s->Print();
    cout << "Quick \n";
    s->Quick(size);
    s->Print();
    cout << "\n\n";
}