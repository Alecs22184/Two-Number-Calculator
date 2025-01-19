// Two Number Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator {
public:
    double num1;
    double num2;
   
    double double_add(double num1, double num2, double &result_add)
    {
        result_add = num1 + num2;
        return result_add;
    }

    double subtract_1_2(double num1, double num2, double &result_subtract_1_2)
    {
        result_subtract_1_2 = num2- num1;
        return result_subtract_1_2;
    }

    double subtract_2_1(double num1, double num2, double &result_subtract_2_1)
    {
        result_subtract_2_1 = num1 - num2;
        return result_subtract_2_1;
    }

    double divide_1_2(double num1, double num2, double &result_divide_1_2)
    {
        result_divide_1_2 = num1 / num2;
        return result_divide_1_2;
    }

    double divide_2_1(double num1, double num2, double &result_divide_2_1)
    {
        result_divide_2_1 =  num2 / num1  ;
        return result_divide_2_1;
    }

    double result_multiply(double num1, double num2, double &result_multiply)
    {
        result_multiply = num2 * num1;
        return result_multiply;
    }

    bool set_num1(double num1, bool &set_num1)
    {
        if (num1 != 0)
        {
          this->num1 = num1;
          set_num1 = true;
          
          return true;

        }
        else  
        {
            set_num1 = false;
            
            return false;
        }

    }

    bool set_num2(double &num2, bool& set_num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            set_num2 = true;

            return true;

        }
        else
        {
            set_num2 = false;

            return false;
        }

    }


};

int main()
{
    setlocale(LC_ALL, "rus");

    double result_add{};
    double result_subtract_1_2{};
    double result_subtract_2_1{};
    double result_divide_1_2{};
    double result_divide_2_1{};
    double result_multiply{};
    bool set_num1{};
    bool set_num2{};
    while (true)
    {
        Calculator calculator;
        std::cout << "Введите num1=";
        std::cin >> calculator.num1;
        std::cout << "Введите num2=";
        std::cin >> calculator.num2;
        calculator.set_num1(calculator.num1, set_num1);
        calculator.set_num2(calculator.num2, set_num2);
        if (set_num1 == 0 || set_num2 == 0) 
        {
            std::cout << " Неверный ввод!" << std::endl;
            continue;
        }


        calculator.double_add(calculator.num1, calculator.num2, result_add);
        calculator.subtract_1_2(calculator.num1, calculator.num2, result_subtract_1_2);
        calculator.subtract_2_1(calculator.num1, calculator.num2, result_subtract_2_1);
        calculator.divide_1_2(calculator.num1, calculator.num2, result_divide_1_2);
        calculator.divide_2_1(calculator.num1, calculator.num2, result_divide_2_1);
        calculator.result_multiply(calculator.num1, calculator.num2, result_multiply);

        std::cout << "num1 + num2 =" << " " << result_add << std::endl;
        std::cout << "num2 - num1 =" << " " << result_subtract_1_2 << std::endl;
        std::cout << "num1 - num2 =" << " " << result_subtract_2_1 << std::endl;
        std::cout << "num1 / num2 =" << " " << result_divide_1_2 << std::endl;
        std::cout << "num2 / num1 =" << " " << result_divide_2_1 << std::endl;
        std::cout << "num2 х num1 =" << " " << result_multiply << std::endl;

    }

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
