# Drucker
[Drupal](http://drupal.org) Stack using [Ansible](http://ansible.com) for provision and
[Docker](http://docker.io)as a provider with [Kraftwagen](http://kraftwagen.org). **BOOYAH!!**

## Motivation
Drucker is based on the [Druboot](https://github.com/TallerWebSolutions/druboot) adapted to a more
[immutable infrastructure](http://michaeldehaan.net/post/118717252307/immutable-infrastructure-is-the-future) concept,
using Docker as a provider for the containers and protocol to create new states of your infrastructure.

*Provision:*
- [Docker](http://docker.io).
- [Docker Compose](https://docs.docker.com/compose/).
- [Docker Machine](https://docs.docker.com/machine/).
- [Ansible](http://ansible.com).

*Ansible roles:*
- [taller.drupal-kw](https://github.com/TallerWebSolutions/ansible-role-drupal-kw) (not official).
- [geerlingguy.drush](https://github.com/geerlingguy/ansible-role-drush).
- [geerlingguy.git](https://github.com/geerlingguy/ansible-role-git).
- [jdauphant.nginx](https://github.com/jdauphant/ansible-role-nginx).
- [nbz4live.php-fpm](https://github.com/NBZ4live/ansible-php-fpm).
- [pbuyle.nginx-drupal](https://github.com/perusio/drupal-with-nginx).
- [pbuyle.php-composer](https://github.com/FloeDesignTechnologies/ansible-php-composer)

*Others:*
- [Kraftwagen](http://kraftwagen.org).
- [Drush](https://github.com/drush-ops/drush).

## Requirements

**GNU/Linux**
Install Docker, Docker compose and Docker machine.

**Mac OS X** and **Windows**
Install the [Docker Toolbox](https://www.docker.com/docker-toolbox).

## Installation

@TODO: Put more detials about the installation better.
1. Install the dependencies.
2. Clone it to a directory for example: *myproject*
3. Find for the word: "drucker" and change it to your project's name.

## Usage for local usage.

`eval "$(docker-machine env default)"`
Setup your Docker's environment variables.

`make up`
If it's the first time you do this, could take a while because it will build the image, but after that, things are gonna be a lot faster.

`make down`
Stop all the containers.

... for more details see the Makefile.

## Contributing

1. Take a look at the issues page.
2. Fork it!
3. Create your feature branch: `git checkout -b my-new-feature`
4. Commit your changes: `git commit -am 'Add some feature'`
5. Push to the branch: `git push origin my-new-feature`
6. Submit a pull request :D

## Credits

- Authors and contributors from Ansible roles used in this project.
- [Sebas](https://github.com/sebas5384) *aka. Sebastian Ferrari*.
- [Revagomes](https://github.com/revagomes) *aka. Renato Gomes*.
- [Taller's team](https://www.drupal.org/node/1480980).

## License

[GPL 2.0](http://www.gnu.org/licenses/old-licenses/gpl-2.0.html)
