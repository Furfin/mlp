TESTFLAGS := -lrt -lm -lsubunit -lgtest -lgtest_main -pthread

install:
	mkdir -p ./build
	cd ./build && qmake .. && make

uninstall:
	rm -dfr ./build

clean:
	rm -fr *.o
	rm -fr moc_*
	rm -fr *.py
	rm -fr *.gch

dist:
	tar -cf project.tar ./*

dvi:
	open ./dvi.html

style: clean
	find ./ | grep '\.h$\' | xargs clang-format -i
	find ./ | grep '\.cc$\' | xargs clang-format -i
	find ./ | grep '\.hpp$\' | xargs clang-format -i
	find ./ | grep '\.h$\' | xargs clang-format -n
	find ./ | grep '\.cc$\' | xargs clang-format -n
	find ./ | grep '\.hpp$\' | xargs clang-format -n

tests:
	g++ ./test/tests.cc controller/*.hpp model/*.h model/*.cc model/*/*.h model/*/*.cc model/*/*/*.h model/*/*/*.cc model/*/*/*/*.h model/*/*/*/*.cc ${TESTFLAGS}
	./a.out
	rm ./a.out

