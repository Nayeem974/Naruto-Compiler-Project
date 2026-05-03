#include "Naruto.h"

int main(void) {
    NarutoSeed();

    double a, b;

    NinjaScroll("=== Naruto Language ===\n");
    NinjaScroll("Enter two numbers a and b: ");

    a = GatherIntel();
    b = GatherIntel();

    printf("\nRasengan(a,b) = %.2f\n", Rasengan(a,b));
    printf("Chidori(a,b) = %.2f\n", Chidori(a,b));
    printf("KageBunshin(a,b) = %.2f\n", KageBunshin(a,b));
    printf("Byakugan(a,b) = %.2f\n", Byakugan(a,b));

    printf("\nSageMode(a,b) = %.2f\n", SageMode(a,b));
    printf("Summoning(a) = %.2f\n", Summoning(a));
    printf("IronSand(a) = %.2f\n", IronSand(a));

    printf("\nShikamaru(a,b) [min] = %.2f\n", Shikamaru(a,b));
    printf("MightGuy(a,b) [max] = %.2f\n", MightGuy(a,b));

    printf("\nMadara(a) [round] = %ld\n", Madara(a));
    printf("HashiRama(a) [floor] = %ld\n", HashiRama(a));
    printf("Itachi(a) [ceil] = %ld\n", Itachi(a));

    printf("\nTruthSeal(a,b) [a==b] = %d\n", TruthSeal(a,b));
    printf("BreakSeal(a,b) [a!=b] = %d\n", BreakSeal(a,b));
    printf("HighRank(a,b) [a>b] = %d\n", HighRank(a,b));
    printf("LowRank(a,b) [a<b] = %d\n", LowRank(a,b));

    printf("\nRandom LuckNinja(1,10) = %d\n", LuckNinja(1,10));

    /* String functions */
    const char* s1 = "HiddenLeaf";
    const char* s2 = "Village";
    char joined[64];
    char sliced[64];

    LinkJutsu(s1, s2, joined, sizeof(joined));
    SliceJutsu(joined, 6, 10, sliced, sizeof(sliced));

    printf("\nChakraCount(\"%s\") = %zu\n", joined, ChakraCount(joined));
    printf("LinkJutsu(\"%s\",\"%s\") = %s\n", s1, s2, joined);
    printf("SliceJutsu(\"%s\",6,10) = %s\n", joined, sliced);

    /* InkForm example */
    char numbuf[64];
    InkFormDouble(123.456, numbuf, sizeof(numbuf));
    printf("\nInkFormDouble(123.456) = %s\n", numbuf);

    NinjaScroll("\n=== End ===\n");
    return 0;
}
