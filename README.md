# Elements de Programació — Codi de les sessions de laboratori

Curs 2026-27, Universitat de Barcelona.

Aquest repositori conté els programes en C que hem escrit a classe, organitzats per llista d'exercicis:

```
llista1/   Composició seqüencial i alternativa
llista2/   Composició iterativa
llista3/   Funcions
```

Cada fitxer `.c` porta el nom que indica l'enunciat de la llista (per exemple, `euclides.c` és l'exercici 11).

## Com descarregar el codi

La sessió de l'aula d'informàtica **no es conserva** d'un dia per l'altre, així que caldrà descarregar el codi a l'inici de cada classe.

### Opció 1: amb `git` (recomanada)

Obriu un terminal i executeu:

```bash
git clone https://github.com/ber2/2026-ub-intro-programacio-labs.git
cd 2026-ub-intro-programacio-labs
```

Això crea una carpeta `2026-ub-intro-programacio-labs` amb tot el codi actualitzat. No cal saber res més de `git` per a aquesta assignatura.

### Opció 2: sense `git`

Aneu a <https://github.com/ber2/2026-ub-intro-programacio-labs>, cliqueu el botó verd **Code** i després **Download ZIP**. Descomprimiu el fitxer i ja el teniu.

## Com compilar i executar un programa

Des de la carpeta on hi ha el fitxer:

```bash
gcc -Wall -o euclides euclides.c
./euclides
```

Si el programa usa funcions matemàtiques (`sqrt`, `cos`, `atan`...), afegiu `-lm` al final:

```bash
gcc -Wall -o serieCos serieCos.c -lm
```

## Deseu la vostra feina!

Aquest repositori només serveix per **descarregar** el codi de classe. Els vostres propis programes es perdran quan es tanqui la sessió si no els deseu en algun altre lloc abans de marxar:

- el vostre espai al núvol de la UB,
- un llapis USB,
- o bé enviant-vos-els per correu.

## Avís

Aquests programes són el que hem escrit a classe, pas a pas. L'objectiu és que entengueu com s'hi arriba, no copiar-los: intenteu fer cada exercici pel vostre compte abans de mirar la solució.
