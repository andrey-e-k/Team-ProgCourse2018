#include <iostream>
#include <string>
#include <ctime>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите строку из 4 символов: ";
    std::string sPass;
    std::cin >> sPass;
    int iLengthPass=sPass.length();
    try
    {
        if(iLengthPass<4) throw 122;
    }
    catch(int i122)
    {
        std::cout << "Ошибка №" << i122 << " - Введено меньше 4 символов.";
        return 122;
    }

    std::cout << "Введите число попыток подбора: ";
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
                std::cout << "Ошибка №" << i3 << " - Превышено число допустимых попыток." << std::endl;
                return 123;
            }
            sCharHeap=sHeap.substr(i2,1);
            sBuilt.replace(i,1,sCharHeap);
            if(sCharPass==sCharHeap) break;
            std::cout << sPass << " != " << sBuilt << std::endl;
        }
    }
    std::cout << "Строка sPass=\"" << sPass << "\"" << std::endl;
    std::cout << "Строка sBuilt=\"" << sBuilt << "\"" << std::endl;
    std::cout << "Количество затраченных попыток: " << iCount << std::endl;
    std::cout << "Время работы программы: " << clock() << std::endl;
    return 0;
}
