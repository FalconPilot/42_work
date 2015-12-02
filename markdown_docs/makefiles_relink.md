# Les Makefiles et le relink
Ce petit document ne peut pas avoir la prétention d'être vraiment une référence, mais
j'espère qu'il pourra aider ceux qui se sentent réellement perdus quand à la création d'un
Makefile pour leur projet.

## Concrètement, à quoi ça sert, un Makefile ?
Tout le monde n'a pas le même point de vue sur l'utilité d'un Makefile,
mais voici ce qu'on peut voir le plus souvent. Un Makefile est un ensemble de règles de
compilation permettant de gérer un projet. Mais on peut aller plus loin, par exemple en
créant des règles capables d'effectuer des tâches plus complexes, etc... Le sujet est très
vaste et l'utilité d'un Makefile est malheureusement un sujet bien trop étendu et vague
pour que je m'attarde dessus. Comprenez que dans le cas de 42, on se sert de Makefiles
principalement pour créer des règles de compilation.

## J'ai vu le terme "relink" dans la norme. C'est quoi ?
Il est très important de comprendre ce qu'est le relink pour l'éviter.
Lors de la compilation d'une librairie, d'un programme, etc... vous allez lier des fichiers entre eux.
On dit donc que vous allez les "linker", en d'autres termes. Cependant, un Makefile intelligent ne doit
pas recompiler des fichiers qui n'ont pas été mis à jour ! Mise en situation.
`Compilation 1 : Je compile mes fichiers source en .o, puis en une librairie statique`
`Je recompile immédiatement après, mais le Makefile ne compile rien !`
L'exemple ci-dessus montre un Makefile qui n'a pas recompilé et lié entre eux les fichiers n'ayant pas
été mis à jour. Ainsi, il n'a pas "relink". C'est donc un Makefile propre et fonctionnel.

Cependant, il peut se passer également ceci.
`Compilation 2 : Je compile mes fichiers source en .o, puis en un librairie statique`
`Je recompile immédiatement après, et le Makefile recompile tout !`
Et voilà un Makefile qui relink. Ce n'est pas à la norme de 42, mais plus ennuyant, c'est mauvais.

## Comment éviter le relink, alors ?
Nous devons comprendre, pour ça, comment fonctionne un Makefile. Il s'agit d'un ensemble de règles,
visibles ainsi dans le fichier.

   rule: dependances
      operation 1
      operation 2
      ...

Sur l'exemple ci-dessus, nous allons analyser ce qu'on peut voir.
* Tout d'abord, "rule" : c'est le nom de la règle. Lorsque vous écrirez "make rule", la règle "rule" sera appelée.
C'est aussi simple que ça.
* Ensuite, "dependances". Et la, concrètement, votre règle va n'exécuter que les dépendances qui auront quelque chose
à faire. C'est un peu obscur, mais c'est normal. Imaginons un Makefile en pseudo-code. Sachez que dans un Makefile,
lancer "make" seulement lance par défaut la règle placée le plus haut dans le Makefile.

    
    compil: librairie
    
    librairie: fichiers_objet
      compiler la librairie
      ranlib la librairie
    
    fichiers_objet: fichiers_source
      compiler le fichier source
      

Que peut-on analyser ici ? Eh bien une première règle, "compil". Une fois appelée, elle va vérifier si la règle
"Librairie" a quelque chose à faire. Cette dernière va vérifier si la règle "fichiers_objet" a quelque chose à faire.
Et la règle "fichiers_objet", elle, va dépendre de fichiers source : c'est un peu plus technique, mais comprenez que
votre fichier objet se mettra à jour (se recompilera, donc) uniquement si son fichier source a, lui, été modifié !
Par extension, également, votre librairie ne se recompilera que si ses fichiers objet ont été mis à jour.

Cela veut dire que votre Makefile ne relink pas, bien joué. Attention toutefois : la première règle lancée d'un Makefile
se lancera toujours, quelles que soient ses dépendances, alors faites bien attention ! Toutefois, toutes les règles décrites
dans ses dépendances ne se lanceront qu'à la condition que leurs propres dépendances n'aient quelque chose à faire, et
ainsi de suite. Une règle peut aussi n'avoir aucune dépendance, ce qui la fera se lancer quoi qu'il arrive.

## Mais je fais comment, du coup, pour la règle "fichiers_objet" ?
Cette règle un peu complete est ce qu'on appelle une règle générique. Dans les faits, la syntaxe d'une règle générique
est la suivante, dans notre cas :
`%.o: %.c`
Qu'est-ce que ça veut dire ? Eh bien, dans un nom de règle "%" peut être n'importe quoi. C'est un nom. Un peu comme le "*"
en shell, pour vulgariser. Sur notre exemple plus haut, cela veut dire que chaque règle possédant un nom constitué de
n'importe quoi, mais terminée impérativement pas l'extension ".o" dépendra de ce nom, mais avec l'extension ".c" (donc votre
fichier source !)

C'est un peu plus compliqué à assimiler, mais pour vous donner un exemple, imaginez que dans votre variable stockant vos
fichiers objet vous possédiez un fichier "ft_putchar.o", dépendant par conséquent de "ft_putchar.c". Votre librairie
possédera en dépendance cette liste de fichiers objet. Eh bien, pour chaque fichier objet, la règle générique sera appelée.
Pour reprendre ft_putchar, votre règle vérifiera que ft_putchar.c a été mis à jour; si c'est le cas, il sera recompilé,
et sinon, il ne le sera pas. Dans les deux cas, on passera au fichier objet suivant jusqu'à avoir terminé la liste.

## Et si on veut en savoir plus sur tout ça ?
Le but de ce document était surtout d'effectuer un petit rappel quand au concept de relink. Vous devez comprendre
que votre Makefile doit être organisé, et si vous souhaitez vous informer plus sur le sujet, beaucoup de documents sont bien
plus détaillés et instructifs que le mien, et je vous invite à chercher un peu.
