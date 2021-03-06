#ifndef EM_PORT_API
#if defined(__EMSCRIPTEN__)
#include <emscripten.h>
#if defined(__cplusplus)
#define EM_PORT_API(rettype) extern "C" rettype EMSCRIPTEN_KEEPALIVE
#else
#define EM_PORT_API(rettype) rettype EMSCRIPTEN_KEEPALIVE
#endif
#else
#if defined(__cplusplus)
#define EM_PORT_API(rettype) extern "C" rettype
#else
#define EM_PORT_API(rettype) rettype
#endif
#endif
#endif

EM_PORT_API(int)
show_me_the_answer()
{
  return 42;
}

EM_PORT_API(float)
add(float a, float b)
{
  return a + b;
}

EM_PORT_API(void)
rgbToHsl(float *p1, float *p2, float *p3)
{
  *p1 = 200;
  *p2 = 200;
}