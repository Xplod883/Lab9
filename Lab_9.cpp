#include <iostream>

using namespace std;

int factorial(int n) {
    if (n < 0) {
        throw invalid_argument("Error: No existe factorial de un número negativo.");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n < 0) {
        throw invalid_argument("Error: No existe Fibonacci de un número negativo.");
    }
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    try {
        int numero;
        cout << "Introduce un número para calcular su factorial: ";
        cin >> numero;

        int resultado = factorial(numero);
        cout << "El factorial de " << numero << " es: " << resultado << endl;

        cout << "Introduce un número para calcular Fibonacci: ";
        cin >> numero;

        int resultadoFib = fibonacci(numero);
        cout << "El número de Fibonacci " << numero << " es: " << resultadoFib << endl;
    }
    catch (const invalid_argument& e) {
        cerr << e.what() << endl;
    }
    catch (...) {
        cerr << "Se ha producido un error desconocido." << endl;
    }
    return 0;
}
