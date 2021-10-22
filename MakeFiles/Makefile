# $< significa la primera dependencia
# $@: target
# %.x: Todos los que tengas un .x. Sirve para hacer muchos ejecutables a la vez.
sumas.x: sumas.cpp

%.x: %.cpp
	g++ $< -o $@

datos.txt: sumas.x
	./$< > $@.txt

clean:
	rm -f a.out *.x *.txt
