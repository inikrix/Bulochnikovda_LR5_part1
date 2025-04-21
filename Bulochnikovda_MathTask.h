#ifndef _BULOCHNIKOVDA_MATHTASK_H_
#define _BULOCHNIKOVDA_MATHTASK_H_

#include <string>
using namespace std;

bool UserInput(string input) {
    // если строка пустая - ввод некорректен
    if (input.empty()) return false;
    // попытка
    try {
        // преобразование введенного значения в тип int
        size_t pos;
        int number = stoi(input, &pos);
        if (pos != input.length()) return false;
        if (number < 0) return false;
        if (number < 0) return false;
        
    } 
    catch (...) { // если возникла ошибка в блоке try
        return false;
    }
    return true;
}


// вспомогательная функция для ввода целых чисел
void EnterDigit(int& varLink, string label) {
    
        string raw_input;
        cout << label << " = ";
        getline(cin, raw_input);
        while (!UserInput(raw_input)) {
            cout << label << " = ";
            getline(cin, raw_input);
        }
        varLink = stoi(raw_input);
    
}

int CalcRectangleArea(int NumberA, int NumberB){
    return NumberA * NumberB;
}
#endif