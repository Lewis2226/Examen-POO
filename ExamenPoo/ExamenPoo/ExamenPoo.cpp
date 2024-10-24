

#include <iostream>
using namespace std;
class Enemy
{
    
private:
    float Health;
    float MaxHelth;

public:
    void SetHealth(float _health) 
    {
        Health = _health;
    }
    
    float GetHealth() 
    {
        return Health;
    }

    void SetMaxHealth(float _maxHealth) 
    {
        MaxHelth = _maxHealth;
    }

    float GetMaxHealth()
    {
        return MaxHelth;
    }

    Enemy(float _health, float _maxHealth) 
    {
        SetHealth(_health);
        SetMaxHealth(_maxHealth);
    }

    Enemy() 
    {
        Health = 0;
        MaxHelth = 0;
    }
};

struct playerVariable
{
    float Damage;
    float Health;
    float MaxHealth;
    bool IsDead;

    playerVariable(float damage, float heatlh, float maxHealth, bool isDead){}
};

int plusNum() 
{
    int c = 2;
    int d = 4;

    return c + d;
}

int NumxNum() 
{
    int z = 3;
    return z * z;
}

void Nada() {
    cout << "Llamaste una funcion\n";
}

void Showarray(int[2][3])
{
   /*
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << [i]{j};
        }
    }
    */
}

int main()
{
    int age;
    float money;
    int moneyInt;
    int sizeTriangel;
    cout << "Modulo 1.\n";
    cout << "Ingresa tu edad.\n";
    cin >> age;
    if (age >= 20 & age <= 40) 
    {
        cout << "Es una personaje joven\n";
    }
    else 
    {
        cout << "No es una persona joven\n";
    }

    cout << "Ingresa tu dinero actual.\n";
    cin >> money;
    
    moneyInt = round(money);
    
    switch (moneyInt)
    {
     case 100:
         cout << "Poco dinero.\n";
         break;

     case 500:
         cout <<"Dinero moderado.\n";
         break;

     case 1000:
         cout << "Mucho dinero.\n";
         break;

     default:
         cout << "Cantidad de dinero variada.\n";

    }

    cout << "De que tamaño quieres tu triangulo?.\n";
    cin >> sizeTriangel;

    cout << "Triangulo a la izquierda.\n";

    for (int i = 0; i < sizeTriangel; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout << " \n";
    }

    cout << "Triangulo a la derecha.\n";

    int a;
    a = 0;
    int b = sizeTriangel -1;
    while (a <= sizeTriangel)
    {
        
        while (b <= a)
        {
            cout << " *";
            b++;
        }
        cout << " \n";
        a++;
    }

    
    cout << "Suma de 2 numeros: ";
    
    cout << plusNum();
    cout << "\n";

    cout << "Numero al cuadrado: ";
    cout << NumxNum();
    cout << "\n";

    Nada();

    cout << "--------\n";
    cout << "Modulo 2 \n";
    int arryBi[2][3];
    

    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            int rnd = rand();
        }
    }

    int** apuntador;
    //Showarray(arryBi);

    cout << "Direccion de memoria: ";
    cout << *arryBi;
    cout << "\n";
    //apuntador = &arryBi[2][3];

    string saludo = "Hola, como estas";

    cout << saludo;

    cout << "--------\n";
    cout << "Modulo 3 \n";

    playerVariable player(10.0f, 20.0f, 40.f, true);


    cout << "--------\n";
    cout << "Modulo 4 \n";

}

