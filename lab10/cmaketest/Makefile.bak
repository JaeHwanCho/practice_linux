OBJS = fx_main.o fx_test.o fx_s2308.o
SRCS = fx_main.c fx_test.c fx_s2308.c
CCFLAGS = -g -pg -Wall

fx_main: $(OBJS)
	cc $(CCFLAGS) -o $@ $(OBJS)

%.o: %.c
	cc $(CCFLAGS) -c $<

clean: 
	\rm -f $(OBJS)
cleanall: 
	\rm -f fx_main $(OBJS)
depend:
	gccmakedep -- $(CCFLAGS) -- $(SRCS)
# DO NOT DELETE
fx_main.o: fx_main.c /usr/include/stdc-predef.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/libio.h \
 /usr/include/x86_64-linux-gnu/bits/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h fx_s2308.h fx_test.h
fx_test.o: fx_test.c /usr/include/stdc-predef.h fx_s2308.h
fx_s2308.o: fx_s2308.c /usr/include/stdc-predef.h fx_s2308.h
