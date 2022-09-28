void main()
{
        // Situacion
        printf ("Elige tu historia\n");
        printf ("Un dia cualquiera de verano te despiertas, por primera vez en mucho tiempo antes del mediodia y te preguntas "
        "que podrias hacer\n");
        //Opciones
        printf ("1) Me levanto ya de la cama,si no me volvere a dormir\n");
        printf ("2) Duermo un poco mas, aun tengo sueño\n");
        int b;
        scanf("%d", &b);
        
        if ( b == 1)
        { 
            //Nueva Situacion - Me levanto de la cama    
            printf ("Ya estas en pie pero el baño esta ocupado y no puedes limparte la cara para despejarte\n");
            //Nuevas Opciones
            printf ("3) Esperas de pie un rato, no crees que tarden mucho\n");
            printf ("4) Te vuelves a la cama, estas muy dormido como para esperar\n");
        }   
        
        else if ( b == 2)
        { 
            //Nueva Situacion - Me quedo dormido hasta el mediodia   
            printf ("No esperabas quedarte dormido tanto tiempo,ahora es tarde,como siempre\n");
            //Nuevas Opciones
            printf ("5) Que le vamos a hacer, te vas a levantar ya y hacer cosas, aunque sea tarde\n");
            printf ("6) Lloras, estas harto de que siempre te pase lo mismo, no quieres ni levantarte ya\n");
        } 
        
        else if ( b == 3)
        {
          //Nueva situacion - Sigues esperando de pie, ha pasado 1h...
          printf ("Te estas desesperando, ha pasado 1h y te estas meando, piensas en si deberias haberte quedado durmiendo\n");
          //Nuevas opciones
          printf ("7) Te vas a la cama a esperar, estas cansado de estar de pie\n");
          printf ("8) Te meas en una botella e intentas lavarte la cara en la cocina, no podias seguir esperando\n");
        }

        else if ( b == 4)
        {
            //Nuevo Final -  Te quedaste dormido al volver a la cama...
            printf ("El intento de levantarte pronto no ha servido esta vez, te volviste a quedar dormido, "
            "y esta vez el triple de horas,de hecho sigues durmiendo,intentalo otro dia, al menos lo intentaste\n"); 
        }

        else if ( b == 5)
        {
           //Nuevo Final - Te levantaste tarde pero ya estas en marcha
           printf ("Pues es otro dia mas,tarde pero mejor tarde que nunca te dices a ti mismo, en algun momento "
           " lo conseguiras, necesitas reajustar tu horario algun dia\n");
        }

        else ( b == 6)
        {
           // Nuevo Final - Estas muy deprimido y sigues en la cama...
           printf ("No puedes aguantar otro dia igual, no te ves capaz de soluccionar tu problema y crees que "
           " la unica solucion seria desaperecer para no tener que vivir esto ni un dia mas, vas a suicidarte\n");
        }

        else if ( b == 7)
        {
            //Nuevo Final - Te has ido a esperar un rato en la cama...
            printf ("Al cabo de 5 minutos mas salen del baño, no sabias que ibas a hacer si llegas a esperar mas, "
            " hoy puedes hacer tu dia con normalidad y con mas tiempo gracias a levantarte pronto, la espera ha "
            " valido la pena finalmente\n");
        }

        else 
        {
            // Nuevo Final - Como no podias esperar mas decidiste hacerlo todo en la cocina...
            printf ("Justo cuando terminas en la cocina viene tu madre ha decirte de todo por no haberlo hecho en el "
            " baño, pero no podias esperar mas... Ahora va a estar todo el dia gritando por lo mismo... Al final ha "
            " merecido la pena realmente levantarse pronto?\n");
        }
    char c[2];
    scanf ("%c", &c) ;    
    scanf ("%c", &c) ;  
}  
 

// Hola que tal

kjhgdkjfdhsfkhdksfg
