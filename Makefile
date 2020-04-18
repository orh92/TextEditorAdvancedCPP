a.out: main.o editor.o document.o
	g++ -std=c++11 Main.o Editor.o Document.o -o a.out # every time that Main.o or Editor.o changes then build new executable file names output

main.o: Main.cpp
	g++ -std=c++11 -c main.cpp

editor.o: Editor.cpp Editor.h
	g++ -std=c++11 -c Editor.cpp

document.o: Document.cpp Document.h
	g++ -std=c++11 -c Document.cpp

clean:
	rm -f *.o a.out # Remove everything that match *.o and output