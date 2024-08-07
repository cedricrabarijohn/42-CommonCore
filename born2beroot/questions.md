- Pourquoi Debian
- Difference entre aptitude et apt
- C'est quoi AppArmor
- Difference entre SELinux et AppArmor
- Explique les partitions dans ta machine virtuelle
- C'est quoi ssh
- Comment ca fonctionne
- Cree un nouvel utilisateur et connecte-le via ssh
- Regarde les infos de cet utilisateur
- Explique le pare-feu UFW
- Check le status du pare-feu UFW
- Desactive-le
- Reactive-le
- Est-ce que seul le port 4242 est ouvert dans ta machine virtuelle
- Est-ce que le pare-feu est actif au lancement de la machine
- Change le hostname via la ligne de commande
- Comment tu as configurer la politique de mot de passe
- Comment est configure sudo
- Est-ce que **login**42 est present et fait parti des groupes **user42** et **sudo**
- Cree un nouveau groupe
- Cree un nouvel utilisateur et assignes-lui a ce dernier
- Regarde la liste des groupes auxquelles est assigne cet utilisateur
- Est-ce que la politique de mot de passe suit ses regles
    - Expiration du mot de passe tous les 30 jours
    - Le nombre minimum de jours avant de pouvoir modifier un mot de passe est configure a 2
    - L'utilisateur recoit un avertissement 7 jours avant que son mot de passe n'expire
    - Le mot de passe sera de 10 caractères minimums dont une majuscule, une minuscule et un chiffre, et ne devra pas comporter plus de 3 caractères identiques consécutifs.
    - Le mot de passe ne doit pas comporter le nom de l'utilisateur
    - La règle suivante ne s’applique pas à l’utilisateur root : le mot de passe devra comporter au moins 7 caractères qui ne sont pas présents dans l’ancien mot de passe.
    - Bien entendu votre mot de passe root devra suivre cette politique.

- Après avoir mis en place vos fichiers de configuration, il faudra changer tous les mots de passe des comptes présents sur la machine virtuelle, compte root inclus.

- Configuration stricte du groupe sudo
    - L’authentification en utilisant sudo sera limitée à 3 essais en cas de mot de passe
    erroné
    - Un message de votre choix s’affichera en cas d’erreur suite à un mauvais mot de passe lors de l’utilisation de sudo.
    - Chaque action utilisant sudo sera archivée, aussi bien les inputs que les outputs.Le journal se trouvera dans le dossier /var/log/sudo/.
    - Le mode TTY sera activé pour des questions de sécurité.
    - Les paths utilisables par sudo seront restreints, là encore pour des questions de
    sécurité. Exemple :
    /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin

- Explique le script monitoring.sh
    - L’architecture de votre système d’exploitation ainsi que sa version de kernel.
    - Le nombre de processeurs physiques.
    - Le nombre de processeurs virtuels.
    - La mémoire vive disponible actuelle sur votre serveur ainsi que son taux d’utilisation sous forme de pourcentage.
    - La mémoire disponible actuelle sur votre serveur ainsi que son taux d’utilisation
    sous forme de pourcentage.
    - Le taux d’utilisation actuel de vos processeurs sous forme de pourcentage.
    - La date et l’heure du dernier redémarrage.
    - Si LVM est actif ou pas.
    - Le nombre de connexions actives.
    - Le nombre d’utilisateurs utilisant le serveur.
    - L’adresse IPv4 de votre serveur, ainsi que son adresse MAC (Media Access Control).
    - Le nombre de commande executées avec le programme sudo.

- Interrompt l'execution du script via le cron

-