#include <iostream>
#include <string>
#include <ctime>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "������� ������ �� 4 ��������: ";
    std::string sPass;
    std::cin >> sPass;
    int iLengthPass=sPass.length();
    try
    {
        if(iLengthPass<4) throw 122;
    }
    catch(int i122)
    {
        std::cout << "������ �" << i122 << " - ������� ������ 4 ��������.";
        return 122;
    }

    std::cout << "������� ����� ������� �������: ";
    int iTry;
    std::cin >> iTry;

    std::string sHeap="QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890";
    int iLengthHeap=sHeap.length(),
        iCount=0;
    std::string sCharHeap,
                sCharPass,
                sBuilt="QQQQ";
    for(int i=0; i<iLengthPass; i++)
    {
        sCharPass=sPass.substr(i,1);
        for(int i2=0; i2<iLengthHeap; i2++)
        {
            try
            {
                if(iCount == iTry) throw 123;
                iCount++;
            }
            catch(int i3)
            {
                std::cout << "������ �" << i3 << " - ��������� ����� ���������� �������." << std::endl;
                return 123;
            }
            sCharHeap=sHeap.substr(i2,1);
            sBuilt.replace(i,1,sCharHeap);
            if(sCharPass==sCharHeap) break;
            std::cout << sPass << " != " << sBuilt << std::endl;
        }
    }
    std::cout << "������ sPass=\"" << sPass << "\"" << std::endl;
    std::cout << "������ sBuilt=\"" << sBuilt << "\"" << std::endl;
    std::cout << "���������� ����������� �������: " << iCount << std::endl;
    std::cout << "����� ������ ���������: " << clock() << std::endl;
    return 0;
}
