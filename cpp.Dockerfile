FROM debian:10.5

RUN apt-get update -y

RUN apt-get install -y gcc g++ make

WORKDIR /app

ENTRYPOINT ["bash", "cpp_run.sh"]

