/*
* Solucion aportada por el profesor de la FdI (UCM):
* Solution given by FdI's (UCM) professor:
*   ANTONIO ALEJANDRO SANCHEZ RUIZ-GRANADOS
* Editada y completada por:
* Edited and completed by:
*   JAIME B.
*/
#include <iostream>
#include <vector>

using namespace std;

// a <= b
int nums_in_range(const vector<float>& v, float a, float b) {
    int r = 0;
    // Inv: 0 <= i <= v.size() and r = #j: 0 <= j < i: a <= v[j] <= b
    // T: v.size() - i
    for (int i = 0; i < v.size(); ++i)
        if (a <= v[i] && v[i] <= b)
            ++r;
    return r;
}
// r = #j: 0 <= j < v.size(): a <= v[j] <= b

/*COMPLEJIDAD DEL ALGORITMO
*   Sabemos que todas las instrucciones ejecutadas tienen coste constante.
*
*   Existe un bucle dentro del algoritmo que ejecuta instrucciones de coste
*   constante para, en el peor de los casos, todos los elementos del vector
*   v.
*
*   Por ello, definiendo n como el numero de elementos del vector v, podemos
*   afirmar que el coste del algoritmo será:
*
*       O(n)
*/
/*COMPLEXITY OF THE ALGORITHM
*   We know all executed instructions belong to O(1).
*
*   Inside our algorithm exists a loop, which executes instructions of constant
*   cost for, in the worst case scenario, every element of vector v.
*
*   Therefore, defining n as the number of elements of vector v, we can affirm
*   that the cost of our algorithm equals to:
*
*       O(n)
*/

bool solve() {
    // read case
    int n;
    cin >> n;
    if (n == -1)
        return false;
    float a, b;
    cin >> a >> b;
    vector<float> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    // compute and write the solution
    cout << nums_in_range(v, a, b) << endl;

    return true;
}

int main() {
    while (solve());

    return 0;
}