/*


Si jo fai const char*  cadena //Aix� no permet modificar el valor que apunta cadena.

cadena++; //Aix� si que es pot fer perqu� est� modificant cadena i no el valor
*cadena=NULL //Aix� NO es pot fer perqu� �s const.

si fai char* const cadena//No permet modificar cadena

cadena++; //Aqui no es podria modificar

const correctles:
�s quan un programa t� tots els const que pots tenir
*/
/*Static:
Es pot fer servir per 3 coses.
1)
Limitar l'acc�s d'una variable global.
Nom�s es pot fer servir dintre del ficher declarat

2)Declarada dins una funci�:
Si �s una variable dins duna funci� �s una variable que t� tres qualitats:
1-La mem�ria �s intocable (Sempre est� al mateix lloc de mem�ria)
2-Existeix fins al final del programa. No es destrueix fins al final del programa
3-S'inicialitza una vegada

void MyFunc(){
static int num_calls=0; //Existir� tantes vegades com haguem cridat la funci�.
num.calls++;
}

void CobrarV(){
static int num_sold=0; //Al ser est�tica no la inicialitza a 0 cada vegada.
num_sold++;
}

printf("%d", num_sold);//Aqui al ser est�tica la troba perqu� no es destrueix

3)La variable est�tica a una classe.
Una variable que no est� vinculada a cap inst�ncia.
Si tenim coses statiques a una classe, aquesta ocupa mem�ria.
si tenim 
MYClass a;
a.SVar = 10; //No canviara, per accedir s'hauria de fer
MyClass::SVar = 10;

Les variables est�tiques s'inicialitzen fora de la classe i al cpp.

M�todes statics no tenen punter a *this perqu� no tenen inst�ncia.

M�todes no poden accedir a propietats est�tiques.



*/