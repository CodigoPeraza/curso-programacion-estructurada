<div align="center">

# HelpCPP — repaso interactivo de C++

**Programa de consola para repasar los fundamentos de C++ a través de un menú guiado y ejemplos ejecutables.**

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Consola](https://img.shields.io/badge/CLI-4D4D4D?style=for-the-badge&logo=gnubash&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white)

</div>

## Descripción

`HelpCPP` es un proyecto de estudio creado para reforzar la sintaxis y la lógica de C++ mediante un menú interactivo. En lugar de mostrar teoría aislada, cada opción presenta un concepto y, en varios casos, permite ejecutar un ejemplo con datos ingresados por el usuario.

El repositorio forma parte de la ruta de aprendizaje del autor y sirve como material de repaso para quienes están comenzando con C++.

## Funcionalidades

- Menú principal con cuatro temas:
  1. **Tipos de datos:** `int`, `float`, `string`, `char` y `bool`.
  2. **Entrada y salida:** uso de `cout` y `cin`.
  3. **Control de flujo:** bucles `while`, `for` y `do-while` con ejemplos.
  4. **Condicionales:** estructura de `switch` para seleccionar opciones.
- Ejemplo de `while`: impresión de números hasta un límite indicado.
- Ejemplo de `for`: generación de la sucesión de Fibonacci.
- Ejemplo de `do-while`: menú repetitivo con opción de salida.
- Limpieza de pantalla con `system("clear")` y notas para adaptarlo a Windows con `system("cls")`.

## Stack técnico

- **C++** con la biblioteca estándar (`iostream`).
- **G++** como compilador.
- Programa de consola sin dependencias externas.

## Estructura

```text
curso-programacion-estructurada/
├── holamundo.cpp   # Programa completo con menú y ejemplos
└── README.md
```

## Compilación y ejecución

```bash
g++ holamundo.cpp -o helpcpp
./helpcpp
```

### Ejemplo de uso

```text
Repasemos lo aprendido
Elije una opción.
1. Tipos de datos.
2. Entrada y salida de datos.
3. control de flujo
4. condicionales.
```

## Conceptos practicados

- Declaración y uso de variables.
- Lectura y escritura por consola.
- Estructuras de selección (`switch`, `if`).
- Bucles controlados por condición y por contador.
- Funciones de la biblioteca estándar y organización del código en bloques.

## Notas

- El programa usa `system("clear")`, por lo que la experiencia de limpieza de pantalla está pensada para Linux/macOS. En Windows debe cambiarse por `system("cls")`.
- Al ser un proyecto didáctico, prioriza la claridad y los comentarios explicativos sobre la modularización en múltiples archivos.
- El repositorio conserva la rama `testing`, utilizada durante el desarrollo de los ejemplos.

## Estado del proyecto

Funcional como material de repaso y base para futuras prácticas de C++.

## Autor

**Francisco Javier Peraza** · [GitHub](https://github.com/CodigoPeraza) · [contacto.peraza@gmail.com](mailto:contacto.peraza@gmail.com)
