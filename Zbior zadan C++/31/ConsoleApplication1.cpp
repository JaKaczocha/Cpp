#include <iostream>

int main()
{
    int n, k,newton,nFac = 1,kFac = 1,nkFac = 1;

    std::cout << "Newton's symbol has n over k." << std::endl;
    std::cout << "enter n: ";
    std::cin >> n;
    std::cout << "enter k: ";
    std::cin >> k;

    if (k > n) {
        std::cout << "n must be greater than k.";
    }
    else {
        if (n == 0) {
            nFac = 1;
        }
        for (int i = 2; i <= n; i++) {
            nFac *= i;
        }

        if (k == 0) {
            kFac = 1;
        }
        for (int i = 2; i <= k; i++) {
            kFac *= i;
        }

        if ((n - k) == 0) {
            nkFac = 1;
        }
        for (int i = 2; i <= (n - k); i++) {
            nkFac *= i;
        }

        newton = nFac / ((nkFac)*kFac);

        std::cout << n << " over " << k << " : " << newton;
    }
    
}

