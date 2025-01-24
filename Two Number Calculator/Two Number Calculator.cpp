// Two Number Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator {
private :
    double num1;
    double num2;
public:
    Calculator(double num1, double num2) {
        this-> num1 =  num1;
        this-> num2 =  num2;
    }
   
    double double_add()// метод выполняет сложение num1+num2
    {
       
        return (num1+num2);
    }

    double subtract_1_2() // метод выполняет вычитание num1 - num2
    {
       
        return (num1 - num2);
    }

    double subtract_2_1() // метод выполняет вычитание num2 - num1
    {
       
        return (num2 - num1);
    }

    double divide_1_2()// метод выполняет деление num1 / num2
    {
       
        return (num1 / num2);
    }

    double divide_2_1()// метод выполняет деление num2 / num1
    {
      
        return  (num2 / num1);
    }

    double result_multiply()// метод выполняет умножение num1 * num2
    {
       
        return ( num1 * num2);
    }

    bool set_num1(double set_num1, bool &set1)// метод  проверяет  значение на !=0 и устанавливает значение num1
    {
        if (set_num1 != 0)
        {
        
          this->num1 = set_num1;
          if (num1 >= 1) 
          {
              set1 = true;
          }
          
          
          return (set1);

        }
        else  
        {
            set1 = false;
            
            return set1;
        }

    }

    bool set_num2(double set_num2, bool &set2) // метод  проверяет  значение на !=0 и устанавливает значение num2
    {
        if (set_num2 != 0)
        {
            set2 = true;
            this->num2 = set_num2;
            

            return  set2;

        }
        else
        {
            set2 = false;

            return  set2;
        }

    }


};

int main()
{
    setlocale(LC_ALL, "rus");

    
    bool set1{};
    bool set2{};
    double set_num1{};
    double set_num2{};
    Calculator calculator(0, 0);

    while (true)
    {
        
         
        do {
            std::cout << "Введите num1=";
            std::cin >> set_num1;

            calculator.set_num1(set_num1, set1);
            
            if (set1 == false)
            {
                std::cout << " Неверный ввод!" << std::endl;
            }

        } while (set1 == false);

          
                do 
                {

                    std::cout << "Введите num2=";
                    std::cin >> set_num2;
                    calculator.set_num2(set_num2,  set2);
                    if (set2 == false)
                    {
                        std::cout << " Неверный ввод!" << std::endl;
                    }
                } 
                while (set2 == false);

         

        std::cout << "num1 + num2 =" << " " << calculator.double_add() << std::endl;
        std::cout << "num1 - num2 =" << " " << calculator.subtract_1_2()  << std::endl;
        std::cout << "num2 - num1 =" << " " << calculator.subtract_2_1() << std::endl;
        std::cout << "num1 / num2 =" << " " << calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 =" << " " << calculator.divide_2_1() << std::endl;
        std::cout << "num1 х num2 =" << " " << calculator.result_multiply() << std::endl;
        
    }

}

