#ifdef **linux**
extern "C" int add(int x, int y);
extern "C" int minus(int x, int y);
extern "C" int multiply(int x, int y);
#elif \_WIN32
extern "C" **declspec(dllexport) int add(int x, int y);
extern "C" **declspec(dllexport) int minus(int x, int y);
extern "C" **declspec(dllexport) int multiply(int x, int y);
#elif **APPLE\_\_
extern "C" int add(int x, int y);
extern "C" int minus(int x, int y);
extern "C" int multiply(int x, int y);
#endif