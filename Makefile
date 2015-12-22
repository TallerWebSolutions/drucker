MACHINE_ENV = default
COMPOSE_PROJECT_NAME = drucker

.PHONY: build up down restart clean-containers clean-images clean

build:
	docker-compose build --force-rm

up:
	docker-compose up -d

down:
	docker-compose stop

in:
	docker exec -it `docker ps | grep $(COMPOSE_PROJECT_NAME)_web_1  | awk '{print $$1}'` /bin/bash

restart:
	docker-compose restart

clean: clean-containers clean-images

clean-containers:
	docker rm -v $$(docker ps -a -q -f status=exited)
	docker rm -v --name $(COMPOSE_PROJECT_NAME)_web_1
	docker rm -v --name $(COMPOSE_PROJECT_NAME)_mysql_1

clean-images:
	docker rmi $(COMPOSE_PROJECT_NAME)_web
	docker rmi $$(docker images -f "dangling=true" -q)

default: build