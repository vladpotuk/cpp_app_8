#include <iostream>
#include<Windows.h>
#include<math.h>

int main() {
    system("chcp 1251");
    system("cls");
    int hryvni, kopiyok;

    std::cout << "Введіть гривні: ";
    std::cin >> hryvni;

    std::cout << "Введіть копійки: ";
    std::cin >> kopiyok;

    
    int correctedHryvni = hryvni + kopiyok / 100;
    int correctedKopiyki = kopiyok % 100;

    std::cout << "Правильна сума: " << correctedHryvni << " грн. " << correctedKopiyki << " коп." << std::endl;

    return 0;
}