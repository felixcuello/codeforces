build_ruby:
	docker build \
		-t competitive_programming_ruby \
		- < ruby.Dockerfile

build_cpp:
	docker build \
		-t competitive_programming_cpp \
		- < cpp.Dockerfile

cpp: build_cpp
	docker run \
		-v $$(pwd):/app \
		-t competitive_programming_cpp \
		$(PRG); \
		diff $(PRG).out $(PRG).tmp

ruby: build_ruby
	docker run \
		-v $$(pwd):/app \
		-t competitive_programming_ruby \
		$(PRG); \
		diff $(PRG).out $(PRG).tmp

solve: clean
	mv $(PRG).* solved/

clean:
	rm -f $(PRG) *.tmp
