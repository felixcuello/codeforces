FROM ruby:2.7.1-buster

WORKDIR /app

ENTRYPOINT ["bash", "ruby_run.sh"]

