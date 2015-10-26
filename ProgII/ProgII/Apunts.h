/*


Si jo fai const char*  cadena //Aixó no permet modificar el valor que apunta cadena.

cadena++; //Aixó si que es pot fer perquè està modificant cadena i no el valor
*cadena=NULL //Aixó NO es pot fer perquè és const.

si fai char* const cadena//No permet modificar cadena

cadena++; //Aqui no es podria modificar

const correctles:
És quan un programa té tots els const que pots tenir
*/
/*Static:
Es pot fer servir per 3 coses.
1)
Limitar l'accés d'una variable global.
Només es pot fer servir dintre del ficher declarat

2)Declarada dins una funció:
Si és una variable dins duna funció és una variable que té tres qualitats:
1-La memòria és intocable (Sempre està al mateix lloc de memòria)
2-Existeix fins al final del programa. No es destrueix fins al final del programa
3-S'inicialitza una vegada

void MyFunc(){
static int num_calls=0; //Existirà tantes vegades com haguem cridat la funció.
num.calls++;
}

void CobrarV(){
static int num_sold=0; //Al ser estàtica no la inicialitza a 0 cada vegada.
num_sold++;
}

printf("%d", num_sold);//Aqui al ser estàtica la troba perquè no es destrueix

3)La variable estàtica a una classe.
Una variable que no està vinculada a cap instància.
Si tenim coses statiques a una classe, aquesta ocupa memòria.
si tenim 
MYClass a;
a.SVar = 10; //No canviara, per accedir s'hauria de fer
MyClass::SVar = 10;

Les variables estàtiques s'inicialitzen fora de la classe i al cpp.

Mètodes statics no tenen punter a *this perquè no tenen instància.

Mètodes no poden accedir a propietats estàtiques.



*/