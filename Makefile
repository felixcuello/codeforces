build_ruby:
	docker build \
		-t competitive_programming \
		- < ruby.Dockerfile

build_cpp:
	docker build \
		-t competitive_programming \
		- < cpp.Dockerfile

clocal:
	g++ -g $(PRG).cc -o $(PRG)

go:
	go run $(PRG).go

cpp: build_cpp
	docker run \
		-v $$(pwd):/app \
		-t competitive_programming \
		$(PRG); \
		diff ./test_cases/$(PRG).out $(PRG).tmp

rlive:
	ruby $(PRG).rb

ruby: build_ruby
	docker run \
		-v $$(pwd):/app \
		-t competitive_programming \
		$(PRG); \
		diff ./test_cases/$(PRG).out $(PRG).tmp

shell:
	docker run \
		-v $$(pwd):/app \
		--entrypoint bash \
		-ti competitive_programming

solve: clean
	mv $(PRG).* solved/

clean:
	rm -rf $(PRG) *.tmp $(PRG).dSYM/

