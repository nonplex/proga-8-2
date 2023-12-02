#include <iostream>
#include <string>
// Л/р 8,Задание 2. Вариант 21
//Дана строка, содержащая полное имя файла. 
// Выделить из этой строки название последнего каталога (без символов «\»). 
// Если файл содержится в корневом каталоге, то вывести символ «\»
// Ввод значений производится с клавиатуры.
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    string ssilka;
    cout << "Введите полное имя файла: ";
    // Считываем полное имя файла
    getline(cin, ssilka);
    // Ищем позицию последнего символа '\'
    size_t lastpos = ssilka.find_last_of("\\");
    if (lastpos == string::npos) {
        // Если символ '\' не найден, значит файл находится в корневом каталоге
        cout << "\\";
    }
    else {
        // Выделяем последний каталог из строки
        string lastDirectory = ssilka.substr(lastpos + 1);
        cout << lastDirectory;
    }
}