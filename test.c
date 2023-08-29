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
