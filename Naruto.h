#ifndef NARUTO_H
#define NARUTO_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

/* ---------- Arithmetic ---------- */
static inline double Rasengan(double a, double b)      { return a + b; }          /* Add / Sum */
static inline double Chidori(double a, double b)       { return a - b; }          /* Subtract */
static inline double KageBunshin(double a, double b)   { return a * b; }          /* Multiply */
static inline double Byakugan(double a, double b)      { return a / b; }          /* Divide */
static inline long   Sharingan(long a, long b)         { return a % b; }          /* Modulus */

static inline double SageMode(double a, double b)      { return pow(a, b); }      /* Power */
static inline double Summoning(double a)               { return sqrt(a); }        /* Square Root */
static inline double IronSand(double a)                { return fabs(a); }        /* Absolute Value */

static inline double Shikamaru(double a, double b)     { return (a < b) ? a : b; }/* Min */
static inline double MightGuy(double a, double b)      { return (a > b) ? a : b; }/* Max */

static inline long   Madara(double a)                  { return lround(a); }      /* Round */
static inline long   HashiRama(double a)               { return (long)floor(a); } /* Floor */
static inline long   Itachi(double a)                  { return (long)ceil(a); }  /* Ceiling */

/* Random value in [a, b]. Call NarutoSeed() once before using for best results. */
static inline void   NarutoSeed(void)                  { srand((unsigned)time(NULL)); }
static inline int    LuckNinja(int a, int b) {
    if (a > b) { int t = a; a = b; b = t; }
    return a + (rand() % (b - a + 1));
}

/* Comparisons /
static inline int TruthSeal(double a, double b)  { return (a == b); }  /* Equal */
static inline int BreakSeal(double a, double b)  { return (a != b); }  /* Not Equal */
static inline int HighRank(double a, double b)   { return (a > b); }   /* Greater Than */
static inline int LowRank(double a, double b)    { return (a < b); }   /* Less Than */

/* Logical
 * Treats non-zero as true, zero as false.
 */
static inline int TeamSeven(int a, int b)        { return (a && b); }  /* AND */
static inline int AlliedForces(int a, int b)     { return (a || b); }  /* OR */
static inline int GenjutsuFlip(int a)            { return (!a); }      /* NOT */

/* I/O */
static inline void NinjaScroll(const char* x)    { printf("%s", x); }  /* Print */
static inline double GatherIntel(void) {                                  /* Input (number) */
    double x;
    scanf("%lf", &x);
    return x;
}

/* Type Conversions */
static inline int   StoneForm(double x)          { return (int)x; }     /* To Integer */
static inline double WaterForm(double x)         { return (double)x; }  /* To Float (already double) */

/* Convert a double to string (via snprintf) */
static inline void InkFormDouble(double x, char* out, size_t out_sz) {
    if (!out || out_sz == 0) return;
    snprintf(out, out_sz, "%.15g", x);
}

/* String Ops */
static inline size_t ChakraCount(const char* s)  { return strlen(s); }  /* String Length */

/* Concat: out = a + b. Make sure out has enough space. */
static inline void LinkJutsu(const char* a, const char* b, char* out, size_t out_sz) {
    if (!out || out_sz == 0) return;
    out[0] = '\0';
    strncat(out, a ? a : "", out_sz - 1);
    strncat(out, b ? b : "", out_sz - strlen(out) - 1);
}

/* Substring slice [i, j) (i inclusive, j exclusive). Handles bounds safely. */
static inline void SliceJutsu(const char* s, size_t i, size_t j, char* out, size_t out_sz) {
    if (!out || out_sz == 0) return;
    out[0] = '\0';
    if (!s) return;

    size_t n = strlen(s);
    if (i > n) i = n;
    if (j > n) j = n;
    if (j < i) j = i;

    size_t len = j - i;
    if (len >= out_sz) len = out_sz - 1;

    memcpy(out, s + i, len);
    out[len] = '\0';
}

#endif /* NARUTO_H */
