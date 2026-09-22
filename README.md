# PEL · Figuras geométricas

Ejercicio individual de Programación con Estructuras Lineales, realizado en C++20 con CLion. Las clases están separadas en archivos `.h` (declaración) y `.cpp` (implementación).

## Enunciado resumido

Crear una clase FiguraGeometrica con área y perímetro, y clases derivadas Circulo, Rectangulo y Triangulo. Crear objetos y mostrar sus resultados.

## Archivos

- `FiguraGeometrica.h/.cpp`: atributos comunes y método para mostrar información.
- `Circulo.h/.cpp`: radio, área y perímetro del círculo.
- `Rectangulo.h/.cpp`: base, altura y sus cálculos.
- `Triangulo.h/.cpp`: tres lados; área mediante la fórmula de Herón.
- `main.cpp`: crea y prueba las tres figuras.
- `CMakeLists.txt`: configuración de compilación.

## Cómo ejecutarlo

En CLion, abre la carpeta del repositorio como proyecto CMake, espera a que cargue la configuración y ejecuta `Ejercicio1FigurasGeometricas`.

Desde una terminal con CMake 4.3 o superior y un compilador compatible con C++20:

```sh
cmake -S . -B build
cmake --build build
```

Con un generador de una configuración, el ejecutable queda en `build/Ejercicio1FigurasGeometricas` (en Windows, añade `.exe`). Con generadores multiconfiguración puede quedar en `build/Debug/`.

## Resultados de ejemplo

| Figura | Datos | Área | Perímetro |
|---|---|---:|---:|
| Círculo | Radio 2 | 12.57 | 12.57 |
| Rectángulo | Base 4, altura 3 | 12.00 | 14.00 |
| Triángulo | Lados 3, 4 y 5 | 6.00 | 12.00 |

## Conceptos y decisiones

Se utiliza herencia pública: cada figura concreta es una FiguraGeometrica. Primero se llama a `calculo()` y después a `mostrarInformacion()`. Los constructores rechazan dimensiones no positivas y triángulos imposibles.

Partimos de un ejemplo compartido por un compañero y corregimos fórmulas, constructores y organización. No se utilizan vectores ni arrays estáticos.

## Para estudiarlo desde el móvil

1. Lee el `.h` e identifica atributos, constructor y métodos.
2. Abre el `.cpp` y explica cada método con tus palabras.
3. Lee `main.cpp` e intenta predecir los resultados antes de mirar la tabla.
4. En el ordenador, cambia un ejemplo y comprueba tu predicción.

GitHub permite leer estos archivos desde su aplicación o navegador móvil; el README no ejecuta el programa.
