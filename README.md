[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/9J9TrW2r)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16653039&assignment_repo_type=AssignmentRepo)
# Práctica 2: Introducción al desarrollo. Ponlo en práctica. 

Apoyate en los siguientes recursos para realizar la práctica:

[Descripción de la práctica](https://revilofe.github.io/section3/u01/practica/EDES-U1.-Practica011/)


---

# Elementos del desarrollo: ponlo en práctica

## P 1.11 Ponlo en práctica
- **ID de la Actividad:** P 1.11: Elementos de desarrollo¶
- **Módulo:** EDES
- **Unidad de Trabajo:** UD 1 - Introducción al desarrollo de software
- **Fecha de Creación:** 20/10/2024
- **Fecha de Entrega:** 21/10/24
- **Alumno(s):** 
  - **Nombre y Apellidos:** Jesús Gallardo Domínguez
  - **Correo electrónico:** jgaldom0701@g.eduacaand.es
  - **Iniciales del Alumno/Grupo:** JGD

## Descripción de la Actividad

El objetivo principal de esta actividad es realizar un mismo programa en 3 lenguajes de programación distintos, y analicemos el proceso
de compilaión, pasos intermedios (si los hubiera), y de ejecución, comparándolos y respondiendo a las preguntas que se encuentran en el resto de la práctica.

## Instrucciones de Compilación y Ejecución
1. **Requisitos Previos:**
   - Python, C y Java
   - Visual Studio Code

2. **Pasos para Compilar el Código:**
   
   Para compilar nuestro programa en C:

   codigo objeto:
   ```bash
   gcc bienvenida.o -o bienvenida
   ```

   codigo ejecutable:
   ```bash
   gcc bienvenida.c -o bienvenida
   ```

   Para ver el byteCode en java:
   ```bash
   javap -c Bienvenida
   ```


   Para compilar nuestro programa en Java:
   ```bash
   javac bienvenida.java
   ```

3. **Pasos para Ejecutar el Código:**

   Para ejecutar el programa en python:
   ```bash
   python3 bienvenida.py
   ```

   Para ejecutar el programa en C:
   ```bash
   ./bienvenida
   ```

   Para ejecutar el programa en java:
   ```bash
   java Bienvenida
   ```


## Desarrollo de la Actividad
### Descripción del Desarrollo

Para realizar los 3 programas en los diferentes lenguajes, me apoyé en la información que encontré en internet. Empecé por hacer el programa en python, que si que lo controlamos mejor, luego en C, que ya aquí sí que tuve que buscar información en internet de como
escribir el código, y por último en java, que también tuve que buscar el como hacerlo porque no lo había usado nunca antes. 

El proceso de compilado y ejecución en los programas que necesitaban compilacion (java y C), sí que conseguí hacerlo por mi cuenta gracias a la práctica que hicimos en clase y al temario de la web del módulo. Este proceso, al haberlo hecho antes, me resultó más fácil que la escritura del código del programa y me llevó mucho menos tiempo de que esperaba.

### Código Fuente

   - [Código fuente C.](src/bienvenida.c) 

   - [Código fuente java.](src/Bienvenida.java)

   - [Código fuente python.](src/bienvenida.py)

### 5.1. Criterio de Evaluación 1.a: Relación entre Software y Hardware.

#### Pregunta:

#### 1. Describe cómo el software que has creado se ha relacionado con los componentes físicos del dispositivo (memoria RAM, procesador, periféricos, etc.) durante la ejecución de los tres lenguajes (interpretado, compilado y en máquina virtual).

   - #### Puntos a incluir:

        - Cómo se almacenaron los datos en memoria.
        Qué hizo el procesador con el código.

        - Si se interactuó con periféricos, como la pantalla para mostrar la salida.

 **Python:** Al ejecutar el programa, los datos introducidos en la variable nombre se almacenan en la RAM, luego, el procesador lee y ejecuta las instrucciones necesarias, en este caso, generar el mensaje de bienvenida y mostrarlo por pantalla. Una vez muestra por pantalla el mensaje, el programa finaliza. 

 **C:** En C, los datos introducidos a la variable nombre también se almacenan en la memoria RAM, pero la gestión de memoria es manual y la decide quien la programa. Luego, el procesador compila el código fuente en un archivo ejecutable pasando por un código objeto, y una vez compilado, ejecuta las instrucciones que ya están en lenguaje máquina, accediendo a la RAM cuando lo necesite.

 **Java:** En java, al ejecutar el programa, las variables se almacenan en la memoria RAM, con una gestión automática. En este lenguaje, el código se compila a un código intermedio conocido como bytCode, escrito con instrucciones que la JVM convierte en lenguaje máquina y lo ejecuta accediendo a la RAM siempre que lo necesite.


### 5.2. Criterio de Evaluación 1.c: Diferenciación entre Código Fuente, Código Objeto y Ejecutable.

#### Preguntas:

#### 1. Explica cómo el código fuente que escribiste se transformó en código objeto y ejecutable en el caso de los lenguajes compilados. ¿Generaste archivos intermedios (código objeto)? ¿Qué nombres tomaron estos archivos? 

Gracias a los recursos necesarios para la compilación de nuestro código en los lenguajes que lo han necesitado (C y Java), los cuales son el compilador de C y el JDK de java, el proceso hasta llegar al código ejecutable ha sido el siguiente:

Una vez hecho el código fuente, introduciendo los comandos agrupados en las [Instrucciones de compilacion](#instrucciones-de-compilación-y-ejecución), hemos creado los códigos intermedios (código objeto en C, y byteCode en java), cuyos archivos estan en la carpeta [src](src). En el caso de C, se nos crea un archivo objeto(bienvenida.o), y con este generamos nuestro ejecutable, pero en java, la creación del byteCode se incluye en el archivo .class(Bienvenida.class) que es el archivo que se ejecuta con la máquina virtual de java JVM.

#### 2. Para los lenguajes interpretados, describe cómo el código fuente se ejecutó directamente, sin generar archivos de código objeto o ejecutable. 

En los lenguajes interpretados, la ejecución del código se realiza línea a línea a medida que lo vamos escribiendo. De manera que no es necesaria la creación de ningún archivo intermedio para su ejecución.

#### 3. Para el lenguaje que genera código intermedio (Java, C#), explica cómo el código fuente se transformó en código intermedio (bytecode) y cómo este fue ejecutado por la máquina virtual.

El código intermedio que genera java es conocido como byteCode, y se genera con la creación del archivo .class con los comandos vistos en las [Instrucciones de compilacion](#instrucciones-de-compilación-y-ejecución).

 El contenido de este archivo, es más cercano al lenguaje máquina, pero sin ser tal cual lenguaje máquina, con el objetivo de ser ejecutado sobre la misma máquina virtual de java(JVM) sin la necesidad de tener que ser compilado en cada dispositivo diferente para poder ejecutarlo. 

### 5.3. Criterio de Evaluación 1.d: Generación de Código Intermedio para Máquinas Virtuales.

#### Preguntas:

#### 1. Describe el proceso de generación de código intermedio (bytecode) en el lenguaje que utilizaste que emplea una máquina virtual (por ejemplo, Java o C#).

A partir de nuestro código fuente, con el comando mencionado en las [instrucciones de compilacion](#instrucciones-de-compilación-y-ejecución), hemos "compilado" nuestro archivo dando así vida a otro nuevo archivo llamado Bienvenida.class, en el cual se encuentra el byteCode, el cual es el equivalente al código objeto en C, y el código necesario para que la JVM pueda interpretarlo y ejecutarlo sobre ella misma.

#### 2. Explica qué rol juega la máquina virtual en la ejecución del código y cómo difiere de la ejecución directa en un sistema operativo como ocurre con los lenguajes compilados e interpretados. 

Esta máquina virtual, la principal ventaja que tiene es el ahorro del paso de la creacion de un archivo ejecutable. Lo que hace es leer un archivo en formato bytecode independientemente de en qué sistema operativo se haya desarrollado el código fuente, a través del cual ejecuta nuestro programa.

En los otros lenguajes, este proceso debería de hacerse en los dispositivos que tengan diferentes sistemas operativos para evitar errores, lo cual es bastante más íncomodo que la ejecución sobre la máquina virtual. Y en cuanto a los lenguajes interpretados, no es siquiera comparable con el proceso de compilación y ejecución de estos lenguajes.

### 5.4. Criterio de Evaluación 1.e: Clasificación de Lenguajes de Programación.

#### Preguntas:

#### 1. Clasifica los tres lenguajes utilizados (interpretado, compilado y en máquina virtual) según su:

   -  **Modo de ejecución** (interpretado vs compilado vs máquina virtual). 

      - Python --> Interpretado.

      - C --> Compilado.

      - Java --> Máquina virtual.

   - **Nivel de abstracción** (alto nivel vs bajo nivel). 

      - Python --> Alto nivel

      - C --> Bajo nivel

      - Java --> Alto nivel

   - **Paradigma de programación** (imperativo, orientado a objetos, funcional). 

      - Python --> Multiparadigma (imperativo, orientado a objetos y funcional).

      - C --> Imperativo.

      - Java --> Orientado a objetos.


#### 2. Explica qué características de estos lenguajes influyeron en su clasificación.

   - Python: En este caso, su flexibilidad para cubrir todo tipo de necesidades del problema que busquemos solucionar. Es un lenguaje más que adaptable a distintos paradigmas, ya sea orientado a objetos, funcional o imperativo.

   - C: Al ser un lenguaje de bajo nivel y ser comunmente utilizado para controlar y comunicarse con el hardware, el ser imperativo hacen que su eficiencia sea aún mejor y sea más óptimo.

   - Java: Es un lenguaje enfocado en la programación orientada a objetos ya de por sí, pero si hay que añadir algo, diría que la portabilidad y facilidad de uso que proporciona el uso de la JVM es lo que hace a este lenguaje tan popular y ser tan utilizado.

###  5.5. Criterio de Evaluación 1.f: Evaluación de Herramientas Utilizadas en el Desarrollo.

#### Preguntas:

#### 1. El *código fuente* de los tres lenguajes elegidos (interpretado, compilado y en máquina virtual). 

- **Sistema operativo** (¿en qué sistema ejecutaste el programa?).

   En un sistema operativo Linux, concretamente e un Ubuntu 22.04.

- **Editor de texto o IDE** (¿dónde escribiste el código?).   
   
   En Visual Studio Code.

- **Compilador o intérprete** (¿cómo se transformó o ejecutó el código?). 

   En python con su respectivo intérprete, en C con su respectivo compilador y la creación de su ejecutable, y en java con el JDK, generando un archivo .class  y ejecutándolo sobre la máquina virtual de Java.

- **Depurador** (si lo usaste, ¿cómo lo empleaste para encontrar errores?). 

   No usé, debido a que es un programa muy simple y funcionaron correctamente desde un principio. 

- **Sistema de gestión de versiones** (si lo usaste, ¿cómo guardaste las versiones del código?). 

   He usado git y github, y he ido subiendo los archivos necesarios y los cambios realizados por consola, con los siguientes comandos en este orden:

   para comprobar que archivos hemos añadido o modificado:
   ```bash
   git status
   ```

   Para añadir los archivos al próximo commit que hagamos:
   ```bash
   git add . 
   ```

   Para hacer el commit:
   ```bash
   git commit -m "Comentario del commit."
   ```

   Para hacer el push:
   ```bash
   git push
   ```
---

## Conclusiones

La verdad que la realización de esta actividad ayuda bastante a comprender aún mejor la diferencia entre los lenguajes compilados y los interpretados, y entre el proceso que hay que seguir para ejecutar dichos lenguajes. 

Ya conocíamos estos conceptos de haberlos hablado y puesto en práctica en clase, pero nunca está de más un refuerzo. 

En resumidas cuentas, las diferencias principales son el proceso de ejecución y la necesidad de realizar ciertos pasos según en qué lenguaje esté escrito el programa que queremos ejecutar y sobre qué se ejecuta.

## Bibliografía:
- https://revilofe.github.io/

- Prácticas realizadas en clase.
