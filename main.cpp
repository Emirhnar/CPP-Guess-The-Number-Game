#include <iostream>
#include <string>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()

using namespace std;

int main() {

    cout << "Welcome to the GUESS THE NUMBER game!" << endl;

    int sayi;

    // Doğru giriş yapılana kadar döngü (Loop until correct entry is made)
    do {
        cout << "Choose a number between 1-100: ";
        cin >> sayi;

        if (sayi < 1 || sayi > 100) {
            cout << "Invalid entry! Please enter a number between 1 and 100." << endl;
        }

    } while (sayi < 1 || sayi > 100);  // While(true) olduğu için geri dönüyor. Geçersizse tekrar sorar. (It returns while(true). If it is invalid, it asks again.)

    // Rastgele sayı üretimi (Random number creator)
    srand(time(0));
    int rastgelesayi = rand() % 100 + 1;
    cout << "Rastgele sayi: " << rastgelesayi << endl;

    // Karşılaştırma (Comparison)
    if (rastgelesayi == sayi) {
        cout << "You guessed the number correctly, congratulations!" << endl;
    } else {
        cout << "Wrong guess!" << endl;
    }

    return 0;
}
