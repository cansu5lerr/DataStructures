all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/DosyaOkuma.cpp -o ./lib/DosyaOkuma.o
	g++ -c -I "./include" ./src/Nokta.cpp -o ./lib/Nokta.o
	g++ -c -I "./include" ./src/DogruParcasi.cpp -o ./lib/DogruParcasi.o
	g++ -c -I "./include" ./src/Dugum.cpp -o ./lib/Dugum.o
	g++ -c -I "./include" ./src/Kuyruk.cpp -o ./lib/Kuyruk.o
	g++ -c -I "./include" ./src/AVLNode.cpp -o ./lib/AVLNode.o
	g++ -c -I "./include" ./src/AVLTree.cpp -o ./lib/AVLTree.o
	g++ -c -I "./include" ./src/Source.cpp -o ./lib/Source.o
bagla:
	g++ ./lib/DosyaOkuma.o ./lib/Nokta.o ./lib/DogruParcasi.o ./lib/Dugum.o ./lib/Kuyruk.o ./lib/AVLNode.o ./lib/AVLTree.o ./lib/Source.o -o ./bin/program
calistir:
	./bin/program