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
            int ii = i;

            finde = true;
            while (finde && *(b+j)!='\0')
            {
                if (*(a + ii) != *(b + j)) {
                    finde = false;
                }
                ii++;
                j++;
            }
            if (finde && *(b + j) == '\0')
            {
                return true;
            }
            j = 0;
        }
        i++;
    }


    return false;

}

int main()
{
    const char* a = "Hello world";
    const char* b = "war";
    const char* c = "Hel";


    cout << substr(a, b) << " " << substr(a, c);
}
