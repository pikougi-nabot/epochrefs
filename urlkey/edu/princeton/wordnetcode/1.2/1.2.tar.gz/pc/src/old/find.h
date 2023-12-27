/*
 * used to be wn.h
 */

typedef struct offs {
          int             true;
	  char             *wd;
	  char            *pos;
	  int              num;
	  int              col;
	  long            *off;
	  int              cnt;
	  int             *use;
} ndex, *ndexptr;

typedef struct rs {
          int             true;
          long         hereiam;
	  int           sstype;
	  int             fnum;
	  char            *pos;
	  int           wcount;
	  char         **words;
	  int        whichword;
	  int         ptrcount;
	  int          *ptrtyp;
	  long         *ptroff;
	  int            *ptoo;
	  int            *pfrm;
	  int           fcount;
	  int           *frmid;
	  int           *frmto;
	  char           *defn;    
} synset, *synsetptr;

#define DEFON 1
#define DEFOFF 0

#define ALL 1		
#define TOP 0	
#define ANTPTR           1     /* [!]  */
#define HYPERPTR         2     /* [@]  */
#define HYPOPTR          3     /* [~]  */
#define ENTAILPTR        4     /* [*]  */
#define SIMPTR           5     /* [&]  */

#define ISMEMBERPTR      6
#define ISSTUFFPTR       7
#define ISPARTPTR        8

#define HASMEMBERPTR     9
#define HASSTUFFPTR     10
#define HASPARTPTR      11

#define MERONYM         12
#define HOLONYM         13
#define V2NSPTR         14
#define N2VPTR          15
#define CAUSETO         16    /* [>]  */
#define CAUSEDBY        17 
#define ASPECTMERPTR    18
#define ASPECTHOLPTR    19
#define SEEALSOPTR	20    /* [^]  */
#define SYNS            21
#define FREQ            22 
#define FRAMES          23    /* [+]  */
#define COORDS          24  
#define BRACKET         25
#define ISDEF           26    /* ???  */
#define HMERONYM        27

#define MAXPTR          27

#define NOUNSS           1
#define VERBSS           2
#define ADJSS            3

#define BADCHARS "@=+\\~`<>{}[] ,(!\"?)\r\n\t.;$:%^#&*"

#define bit(n) (1<<(n))
char           far *tmalloc();
ndexptr        lookup_binx();
synset         *nuscan();
void           traceptr();
void           traceotherptr();
void           tracecoord();
void           adjanttrace();
void           sprintsynset();
void           printframe();
void           printindex();
char           *findtheinfo();
void           sprintbuffer();
void           partsall();
int            is_defined();
int            traceword();
int            tracesense();ÿ