#include <iostream>
#include "vector"

int Massive_Check(std::vector<int> massive_current)
{
    int max_number = massive_current[0];
    for (int current_number: massive_current) {
        if (max_number <= current_number)
        {
            max_number = current_number;
        }
    }
    return max_number;
}

int main() {
    std::cout << "Hello, this is calculator by Gosama" << std::endl;
    std::vector<int> massiv_current{1,2,3234,4,64,123,632,23,51,23};

    int max_number = Massive_Check(massiv_current);
    std::cout << "Max number in this vector = "<<max_number << std::endl;
    return 0;
}
