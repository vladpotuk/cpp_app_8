#include <iostream>
#include<Windows.h>
#include<math.h>

int main() {
    system("chcp 1251");
    system("cls");
    int hryvni, kopiyok;

    std::cout << "������ �����: ";
    std::cin >> hryvni;

    std::cout << "������ ������: ";
    std::cin >> kopiyok;

    
    int correctedHryvni = hryvni + kopiyok / 100;
    int correctedKopiyki = kopiyok % 100;

    std::cout << "��������� ����: " << correctedHryvni << " ���. " << correctedKopiyki << " ���." << std::endl;

    return 0;
}