build_ruby:
	docker build \
		-t competitive_programming \
		- < ruby.Dockerfile

build_cpp:
	docker build \
		-t competitive_programming \
		- < cpp.Dockerfile

cpp: build_cpp
	docker run \
		-v $$(pwd):/app \
		-t competitive_programming \
		$(PRG); \
		diff $(PRG).out $(PRG).tmp

ruby: build_ruby
	docker run \
		-v $$(pwd):/app \
		-t competitive_programming \
		$(PRG); \
		diff $(PRG).out $(PRG).tmp

shell:
	docker run \
		-v $$(pwd):/app \
		--entrypoint bash \
		-ti competitive_programming

solve: clean
	mv $(PRG).* solved/

clean:
	rm -f $(PRG) *.tmp
