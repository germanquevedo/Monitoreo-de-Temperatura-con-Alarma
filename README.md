# Monitoreo-de-Temperatura-con-Alarma
Proyecto implementado en Arduino con C++ usando POO,  patron de diseño observador

Mediante hardware y software se realiza lo siguiente:
1-	Se crea un interfaz de usuario mediante dos botones para ingresar la temperatura limite a comparar con la temperatura del entorno leída por el sensor LM35.
2-	Funcionalidad a través de código (C++, POO) para cada parte del sistema (botones, sensor, mensajes, etc.). 
3-	Simulación mediante software Proteus versión 8.13.
4-	Funcionalidad en sistema embebido. En este caso se usa Arduino ATMega 2650.

Con IDE Visual Studio Code se usa la extension Platformio.

Aplicacion:
 Este sistema permite monitorear la temperatura de un espacio o gabinete donde se encuentren equipos de laboratorios sensibles al cambio y activar una alarma 
 si la temperatura supera un umbral crítico. Se utiliza el patrón de observador para controlar LEDs, un zumbador y una pantalla LCD en función de la temperatura 
 medida por el sensor LM35, sujeto observado. Los botones permiten al usuario configurar una temperatura límite para activar los dispositivos de alarma y visualización.

