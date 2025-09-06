/*Задача 3.
Что нужно сделать:
Напишите функцию, принимающую два указателя на char*, по которым размещены две строки.

Функция должна возвращать true, если вторая строка является подстрокой первой.*/

#include <iostream>
using namespace std;

bool substr(const char* a, const char* b) 
{
    int i = 0;
    int j = 0;
    bool finde = false;
    while (*(a+i) != '\0')
    {
        if (*(a + i) == *(b + j)) 
        {
            finde = true;
            while (finde && *(b+j)!='\0')
            {
                if (*(a + i) != *(b + j)) {
                    finde = false;
                }
                i++;
                j++;
            }
            j = 0;

        }

        i++;
    }

    if (finde)
    {
        return true;
    }
    else return false;

}

int main()
{
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";


    cout << substr(a, b) << " " << substr(a, c);
}
