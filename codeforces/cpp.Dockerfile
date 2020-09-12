FROM debian:10.5-buster

RUN apt-get udpate -y

RUN apt-get install gcc g++ make

CMD bash

