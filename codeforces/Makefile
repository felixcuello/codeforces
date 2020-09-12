build_ruby:
	docker build \
		-t competitive_programming_ruby \
		- < ruby.Dockerfile

ruby: build_ruby
	docker run \
		-v $$(pwd):/app \
		-t competitive_programming_ruby \
		$(PRG); \
		diff $(PRG).out $(PRG).tmp

solve: clean
	mv $(PRG).* solved/

clean:
	rm -f *.tmp

