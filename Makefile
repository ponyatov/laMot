com.com: src.src ./exe.exe Makefile dosbox.conf
	./exe.exe < $< && D:/DOSBox/DOSBox -conf dosbox.conf
#	 && $@
C = cpp.cpp ypp.tab.cpp lex.yy.c
H = hpp.hpp ypp.tab.hpp
./exe.exe: $(C) $(H)
	$(CXX) $(CXXFLAGS) -o $@ $(C) $(L)
ypp.tab.cpp: ypp.ypp
	bison $<
lex.yy.c: lpp.lpp
	flex $<