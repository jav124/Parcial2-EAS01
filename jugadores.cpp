#include <iostream>
#include <string>
#include <cstdlib>  // Función rand().
#include <ctime>    // Función time() para generar una nueva seed aleatoria.
using namespace std;

#define log(x) cout << x << endl;

class Jugador{
    /*
        Agrega propiedades para guardar la vida(número entero), ataque(número entero) y nombre del jugador.
        Agrega una propiedad para guardar el jugador que lo atacó por última vez.
    */
    public:
   int vida;
   int ataque;
   string nomJugador;


    Jugador();
    Jugador( int hp = vida, int ataq = ataque, string nomJ = nomJugador/* agrega parámetros para asignar hp, ataque y nombre */);

    void atacar(  /* agregar parámetros para atacar a otro jugador*/);
    {
        int ataca; = vida-ataque;
        do 
        {
            ataca; = vida-ataque;
              
        }
            
        while (ataca > 0 and < 100)
            if (jugador1 =<0 or jugador2 =<0)
        {
            cout << "Victoria Magistral" << endl;
        }
    }
    void mostrar()
    {
        
          cout << nomJugador(jugador1) << "atacó a " << nomJugador (jugador2) <<  "e hizo " << ataque << "de daño, vida restante de " << nomJugador (jugador2) <<" = " <<vida << endl; 
    }
};

int main()
{
    srand(time(0));  // Seed para generar valores aleatorios

    Jugador jugador1 = {70, 15, "FazePabloZZZ"};
    
    Jugador jugador2 = {50,20, "Pablo_On_144hz"};
    
       jugador1.atacar(jugador2); 
    jugador2.atacar(jugador1)
  

        
    
    /*
        Crear al menos 2 jugadores con diferentes nombres, vida y ataque.
        Los jugadores deben atacarse entre sí, tomando turnos, hasta que uno pierda toda su vida.
        En cuanto la vida del jugador se reduzca a 0 el programa muestra al ganador y se termina.
        No importa quien ataca primero.
    */

    return 0;
}

Jugador::Jugador(){
    /*
        Asignar 100 a hp y 5 a attack como valores default.
        Asignar 'No definido' al nombre como default.
    */
    
    int health = vida = 100;
    int atack = ataque = 5;
    string nombr = nomJugador;
}

Jugador::Jugador(int heal = 80, int atac = 10, nomJug = "Pancho"/* Agrega parámetros para asignar hp, ataque y nombre*/){
    /*
        Asignar los parámetros recibidos a las propiedades del objeto.
        No se pueden asignar valores negativos a hp y attack.
        Máximo 200 hp y 20 attack
    */
    heal = vida;
    atac = ataque;
    nomJug = nomJugador;
}

void Jugador::atacar( atacar/* Agregar parámetros para atacar a otro Jugador */){
    /*
        El jugador atacado(el que recibes como parámetro) pierde HP igual al ataque del jugador que ataca.
        Existe un 20% de probabilidad de que el ataque falle y no haga daño.
        Se debe mostrar lo que pasó en cada ataque:
        nombre1 atacó a nombre2 e hizo 5 de daño, vida restante de nombre2 = 95
        nombre2 atacó a nombre1 pero fallo, vida restante de nombre1 = 100
        El jugador que atacó debe quedar guardar en la propiedad atacadoPor del jugador atacado.
    */
    Jugador1.atacar(jugador2);
Jugador2.atacar(jugador1);

atacar.mostrar(jugador1);
atacar.mostrar(jugador2);    
   
    /*
    Nota:
        int x = rand() % 1000; asigna un valor aleatorio entre 0 y 999 a x;
        Puedes usar esto para la probabilidad del ataque.
    */
}