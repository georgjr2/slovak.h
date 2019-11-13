// typy
#define SÚBOR FILE
#define plávaj float
#define číslo int
#define znak char
#define dlhý long
#define dlhé long
#define krátke short
#define krátky short
#define podpísané signed
#define podpísaný signed
#define nepodpísané unsigned
#define nepodpísaný unsigned

//logické konstrukce
#define ak if
#define keď if
#define inak else
#define kým while
#define pre for
#define rob do
#define prepínač switch
#define prípad case

//konstanty
#define pravda 1
#define nepravda 0
#define lož 0
#define KR '\n'
#define KS -1 //Konec Souboru
#define NULA NULL

// stdio
#define vymaž(x) remove(x)
#define premenuj(x, y) rename(x, y)
#define dočsubor() tmpfile()
#define dočmén(x) tmpnam(x)
#define szavri(x) fclose(x)
#define sspláchni(x) fflush(x)
#define sotvor(x, y) fopen(x, y)
#define sznovuotvor(x, y, z) freopen(x, y, z)
#define nastavmiesto(x, y) setbuf(x, y)
#define prenastavmiesto(x, y, z, a) setvbuf(x, y, z, a)
#define stlačf(...) fprintf(__VA_ARGS__)
#define sčítajf(...) fscanf(__VA_ARGS__)
#define tlačf(...) printf(__VA_ARGS__)
#define čítajf(...) scanf(__VA_ARGS__)

// místo délka tisk formát
#define mdtlačf(...) snprintf(__VA_ARGS__)
#define mtlačf(...) sprintf(__VA_ARGS__)
#define mčítajf(...) sscanf(__VA_ARGS__)
// proměnný souborový tisk formátovaný
#define pstlačf(...) vfprintf(__VA_ARGS__)
#define psčítajf(...) vfscanf(__VA_ARGS__)
#define ptlačf(...) vprintf(__VA_ARGS__)
#define pčítajf(...) vscanf(__VA_ARGS__)
#define pmdtlačf(...) vsnprintf(__VA_ARGS__)
#define pmtlačf(...) vsprintf(__VA_ARGS__)
#define pmčítajf(...) vsscanf(__VA_ARGS__)
#define sdostaňz(x) fgetc(x)
#define sdostaňr(x, y, z) fgets(x, y, z)
#define spoložz(x, y) fputc(x, y)
#define spoložr(x, y) fputs(x, y)
#define dostaňz(x) getc(x)
#define dostaňznak(x) getchar(x)
#define dostaňr(x) gets(x)
#define položz(x, y) putc(x, y)
#define položznak(x) putchar(x)
#define položr(x) puts(x)
#define oddostaňz(x, y) ungetc(x, y)
#define sprečítaj(x, y, z, a) fread(x, y, z, a)
#define szapíš(x, y, z, a) fwrite(x, y, z, a)
#define sdostaňpoz(x, y) fgetpos(x, y)
#define snajdi(x, y, z) fseek(x, y, z)
#define snastavpoz(x, y) fsetpos(x, y)
#define spovedz(x) ftell(x)
#define pretoč(x) rewind(x)
#define vyčistichyb(x) clearerr(x)
#define sks(x) feof(x)
#define schyba(x) ferror(x)
#define tchybu(x) perror(x)
