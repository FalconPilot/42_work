Bonjour, bonsoir !

Je me disais, depuis que j'ai commencé la Piscine C et jusqu'à maintenant, le début du cursus, j'ai croisé assez
peu de fonctions récursives mais un sujet est revenu souvent en regardant sur internet, celui de récursion
terminale. Après avoir étudié son intérêt, ses avantages et les effets secondaires d'une fonction récursive
non-terminale, je me disais que ça aurait pu être intéressant, peut-être, qu'il existe une sorte d'apparté
(vidéo, doc, etc...) initiant à ce concept sur la base du C, par exemple, pour intéresser peut-être à une
autre manière de programmer une fonction récursive en évitant plus de problèmes potentiels avec la stack.

Ci-dessous, pour ceux qui ne connaitraient pas le concept, j'ai prit le temps de rédiger un petit document
pour tenter de l'expliquer au mieux.

# Qu'est-ce qu'une récursion terminale ?

Eh bien une fonction récursive terminale (également nommée tail recursive en anglais) est une autre façon
d'aborder la programmation d'une fonction récursive. Jusque-là, une fonction récursive n'était définie que
par le fait qu'elle se rappelle à un ou plusieurs moments au sein d'elle-même. Une fonction récursive est
dite terminale lorsque le rappel de la fonction est la dernière expression à être évaluée au sein de la
fonction ! Un exemple plus parlant.

*•Une fonction récursive non-terminale*

`n étant le nombre à afficher`

    void    non_tail_recursive(int n)
    {
    	    if (i > 9)
            {
                   non_tail_recursive(n / 10);
                   non_tail_recursive(n % 10);
            }
            else
            {
                   ft_putchar(n + '0');
            }
    }

*•Une fonction récursive terminale*

`n étant le nombre à afficher`
`len est égal à 10^(ft_nbrlen)`

    void    tail_recursive(int n, int len)
    {
	    ft_putchar((n / len) % 10 + 48);
	    if (len > 9)
	    	    tail_recursive(n, len / 10);
    }

Le rappel de la fonction tail_recursive est, dans ce cas présent, la dernière expression à être évaluée.
On parle alors de fonction récursive terminale, à l'inverse de la fonction non_tail_recursive qui évalue
toujours à plusieurs moments dans son exécution au moins une autre expression après son rappel. On remarque
également que la fonction tail_recursive requiert une fonction d'appel toutefois, ce qui implique de penser
son code d'une autre façon.

# Mais alors, quel est le problème d'une fonction récursive non-terminale ?

Seulement, cette fonction récursive non-terminale peut avoir un problème gênant au niveau de la Stack :
en effet, à chaque fois que la fonction se rappelle, elle doit enregistrer son état actuel avant de dupliquer
une copie de la fonction sur la stack, et ainsi de suite. On remarque donc que la Stack se retrouve remplie de
plus en plus de copies de la même fonction, ce qui peut poser problème sur une fonction possédant de très
nombreuses récursions.

# En quoi le fait de placer le rappel en fin de fonction arrange les choses ?

C'est la où la magie de la compilation opère. Le compilateur, détectant alors que notre fonction "tail_recursive"
pour la prendre en exemple est une fonction récursive terminale, va réorganiser les données.
En effet, ce dernier ne va pas demander au programme d'enregistrer l'état actuel de la fonction au moment de la
rappeler, car, aucune expression n'ayant besoin d'être évaluée à l'issue de son exécution, il suffira simplement
au programme de rappeler la fonction fraîchement en modifiant ses arguments. Ainsi, la Stack est plus préservée
qu'avec une fonction récursive non-terminale.

# En quoi on peut hypothétiquement trouver un intérêt à s'y intéresser plus tôt ?

Au delà de l'aspect optimisation, la récursivité terminale est avant tout une autre façon de programmer une
fonction récursive, qui demande de penser son code d'une façon différente. Bien sûr, il est légitime de douter 
de la pertinence de l'enseignement d'un tel concept de façon impérative à des étudiants en début de cursus.
Mais pour les quelques-uns qui s'intéresseraient à l'utilisation de fonctions récursives ou qui développeraient
un intérêt éventuel pour le paradigme fonctionnel, la possibilité de s'atteler au concept de récursion terminale
peut être une curiosité intéressante pour certains.

Bien sûr, tout cela reste une proposition basée sur une opinion personnelle. Le C n'est pas nécessairement le
langage le plus adapté pour s'initier à ce concept, mais c'est le langage avec lequel des personnes seront le
plus à même d'être en contact les premiers mois du cursus (voire plus).
