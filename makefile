# Pendulum
compile:
	gcc src/main.c -Os -lncursesw -lm -o ladder

run:
	@./ladder

clean:
	@ if [ -f ladder ]; then rm ladder; fi;
	@echo "Cleaned"

# end
