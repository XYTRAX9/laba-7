#include <iostream>
#include <string>

using namespace std;

int countOccurrences(const string& str1, const string& str2){
    if (str2.empty()) return 0;
    
    int count = 0;
    size_t pos = str1.find(str2, 0);

    while (pos != string::npos) {
        count++;
        pos = str1.find(str2, pos + 1);
    }
    return count;
}

int main(){
    string str1, str2;

    cout << "Введите первую строку: ";
    cin >> str1;
    cout << "Введите вторую строку: ";
    cin >> str2;

    int result = countOccurrences(str1, str2);
    cout << "Вывод: " << result << endl;

    return 0;
}
