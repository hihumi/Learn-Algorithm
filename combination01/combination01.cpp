#include <iostream>

int C(int n, int r)
{
    int p = 1;
    for (int i = 1; i <= r; ++i) {
        p = p * (n - i + 1) / i;
    }
    
    return(p);
}

int main()
{
    for (int n = 0; n <= 5; ++n) {
        for (int r = 0; r <= n; ++r) {
            std::cout << n << "C" << r << " = " << C(n, r) << " ";
        }
        std::cout << std::endl;
    }
}