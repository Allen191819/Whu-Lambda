#include "UnitTest.hpp"
#include <fstream>

int main() {
    Hasaki::UnitTestFactor();
    Hasaki::UnitTestNumber();
    Hasaki::UnitTestCycleDiv();

    // �����Ҫ������ļ�����ʹ��������һ�α�ע�͵��Ĵ���
    // Ȼ���CycleDiv.hpp�ĵ�12�иĳ�������һ�У����������С��λ
    // #define MAX_OUTPUT  MAX32

    /*
    std::ofstream output1;
    output1.open("D:/Desktop/ans/1_1000000007.txt");
    Hasaki::CD cd1(1, 1000000007);

    ULONGLONG time_start = GetTickCount64();    // ��ʱ

    output1 << cd1;

    std::cout << "Print time: " << GetTickCount64() - time_start << "ms" << std::endl;  // ��ӡ������������Ż���
    */

    getchar();
    return 0;
}


