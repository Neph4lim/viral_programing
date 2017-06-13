#include <stdio.h>
#include <string.h>
// • L’exécutable devra se nommer woody_woodpacker.
// • Votre programme prend en paramètre un fichier binaire (ELF 64 bits uniquement).
// • À la fin de l’exécution de votre programme, un second fichier sera créé, sous le
// nom de woody.
// • Vous êtes libres dans le choix d’algorithme de chiffrement sur les binaires.
// La complexité de votre algorithme va néanmoins être un élément
// important de votre notation. Vous devrez justifier de votre choix
// en soutenance. Un simple ROT n’est pas considéré comme un algorithme
// avancé !
// • Dans le cas d’utilisation d’un algorithme basé sur une clé de chiffrements, celle-ci
// devra être générée de la façon la plus aléatoire possible. Cette clé sera lisible sur
// la sortie standard au lancement du programme principal.
// • Lorsque vous exécutez le programme "chiffré", il devra écrire la string "....WOODY....",
// suivie d’un retour à la ligne, pour indiquer que le binaire est alors déchiffré. Son
// exécution, après déchiffrement, ne sera pas modifiée.
// • Evidemment, en aucun cas l’exécution du programme "chiffré" ne doit crasher.
// • En aucun cas votre programme ne doit modifier le fonctionnement du binaire fi-
// nal créé, son exécution doit correspondre au programme passé en paramètre à
// woody_woodpacker.

// open, close, exit
// ◦ fpusts, fflush, lseek
// ◦ mmap, munmap
// ◦ perror, strerror
// ◦ syscall
// ◦ les fonctions de la famille printf.
// ◦ les fonctions autorisées dans le cadre de votre libft(read, write, malloc, free,
// par exemple :-) ).


// compression

// asm

// 32 bits

//recoit en parametres un binaire mmap le fichier entier check le header -> detecter le type ELF32 64  ERROR -> enum
//a l'arrache coder un truc qui save le fichier dans une structure avec un name + l'exec entier a cote
// reussir a faire un 3 eme executable qui sert de decompresseur ouvrir le fichier entier lui ajouter la structure et son code a se fichier cest de lire justement cette structure ! ---> winner

int main()
{

    char* str = "Hello World\n";
	long len = strlen(str);
	int ret = 0;

	__asm__("movq $1, %%rax \n\t"
		"movq $1, %%rdi \n\t"
		"movq %1, %%rsi \n\t"
		"movl %2, %%edx \n\t"
		"syscall"
		: "=g"(ret)
		: "g"(str), "g" (len));

    printf("HUGE GUYS IS HERE\n");
    return 0;
}
