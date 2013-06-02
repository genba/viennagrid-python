BJAM = ./boost/bjam

all:
	$(BJAM)

clean:
	rm -rf bin
	rm -rf *.so*