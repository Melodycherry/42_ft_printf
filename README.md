# 🖨️ ft_printf  

## 🎯 Objectif du projet

L’objectif est de recoder la fonction `printf()` de la **libc**.  
Le prototype à respecter est le suivant :
```c
int ft_printf(const char *format, ...);
```

## ✨ Fonctionnalités implémentées

Cette version de `ft_printf` gère les conversions les plus courantes du `printf()` standard :

| Conversion | Description                                                   | Exemple d'utilisation                                      | Résultat affiché                       |
|------------|---------------------------------------------------------------|------------------------------------------------------------|----------------------------------------|
| `%c`       | Affiche un caractère unique                                   | `ft_printf("Lettre : %c\n", 'A');`                         | `Lettre : A`                           |
| `%s`       | Affiche une chaîne de caractères                              | `ft_printf("Texte : %s\n", "Bonjour");`                    | `Texte : Bonjour`                      |
| `%p`       | Affiche une adresse mémoire (pointeur), en hexadécimal       | `ft_printf("Adresse : %p\n", ptr);`                        | `Adresse : 0x7ffeefbff5c8` (exemple)  |
| `%d` / `%i`| Affiche un entier signé (base 10)                             | `ft_printf("Nombre : %d\n", -42);`                         | `Nombre : -42`                         |
| `%u`       | Affiche un entier non signé (base 10)                         | `ft_printf("Positif : %u\n", 3000000000);`                 | `Positif : 3000000000`                |
| `%x`       | Affiche un entier non signé en hexadécimal (minuscule)       | `ft_printf("Hexa : %x\n", 255);`                           | `Hexa : ff`                            |
| `%X`       | Affiche un entier non signé en hexadécimal (majuscule)       | `ft_printf("Hexa : %X\n", 255);`                           | `Hexa : FF`                            |
| `%%`       | Affiche simplement le caractère `%`                           | `ft_printf("Progression : 100%%\n");`                      | `Progression : 100%`                   |
