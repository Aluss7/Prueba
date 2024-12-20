
FROM ubuntu:latest

RUN apt-get update && apt-get install -y \
    build-essential \
    g++

COPY . /app

WORKDIR /app

RUN g++ -o programa tema_2_ejercicio_10.cpp

CMD ["./programa"]
