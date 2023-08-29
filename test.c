#define outside 0
#define noval
#define B (123)
#define C (456)

int afunc(void) {
    int local = 0;

    return 123;
}
int global=0;


#define outside 0
#define noval
#define B (123)
#define C (456)
#undef noval
#define D (789)


#define outside 0
#undef _
#define noval
#define B (123)
#undef _
#define C (456)
#undef _
#define D (789)
#undef _


#define outside 0
#define noval
#define B (123)
#ifdef noval
#define C (456)
#else
#define D (789)
#endif
#undef noval
