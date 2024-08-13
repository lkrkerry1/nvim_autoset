#include <bits/extc++.h>

using namespace std;

using ll=long long;
using ull=unsigned long long;
using ui=unsigned int;
namespace IO {
	const int SIZE = (1 << 21) + 1;
    char ibuf[SIZE], *iS, *iT, obuf[SIZE], *oS = obuf, *oT = oS + SIZE - 1, c, qu[55]; int f, qr;
    char _sep = ' ', _end = '\n';
    #ifdef ONLINE_JUDGE
    	#define gc() (iS == iT ? (iT = (iS = ibuf) + fread (ibuf, 1, SIZE, stdin), (iS == iT ? EOF : *iS ++)) : *iS ++)
    #else
    	#define gc() std::getchar()
    #endif
    inline void flush () { fwrite (obuf, 1, oS - obuf, stdout); oS = obuf; }
    inline void putc (char x) { *oS ++ = x; if (oS == oT) flush (); }
    template <typename T>
    inline void fr(T &num) {        
		num = 0;
        short sign = 1;
        char ch = gc();
        while (ch < '0' || ch > '9') {
            if (ch == '-') sign = -1;
            ch = gc();
        }
        while (ch >= '0' && ch <= '9')
            num = num * 10 + ch - '0', ch = gc();
        num = num * sign;
    }
    template <> inline void fr(char &ch) {
        ch = gc();
        while (ch < 'A' || ch > 'z' || (ch > 'Z' && ch < 'a')) ch = gc();
    }
    template <> inline void fr(string &s) {
        s = "";
        char ch = gc();
        while (ch != ' ' || ch != '\n') s += ch, ch = gc();
    }
    template <typename T, typename... Args> inline void fr(T &num, Args &...args) {fr(num), fr(args...);}
    template <typename T>
    inline void fw(T x) {        
		if (x < 0) putc('-'), x = -x;
        if (x > 9) fw(x / 10);
        putc(x % 10 + '0');
    }
    template <> inline void fw(char ch) {putc(ch);}
    template <>inline void fw(string ch) {for (auto c : ch) fw(c);}
    template <typename T> inline void fwn(T num) {fw(num), fw(_end);}
    template <typename T, typename... Args> 
	inline void fwn(T num, Args... args) {fw(num), fw(_sep), fwn(args...);}
//	struct Printer{
//		char _end,_sep;
//		Printer(char _e='\n',char _s=' '):_end(_e),_sep(_s){}
//		static void fr(auto &x){IO::fr(x);}
//		static void fw(auto &x){IO::fw(x);}
//	} ptr;
    struct Flusher_ {~Flusher_(){flush();}}io_flusher_;
}  // namespace IO

using IO::fr;using IO::fw;using IO::fwn;

namespace DS{}
namespace GR{}

namespace SOL{
	void solve(){
		
	}
	void clear(){}
}

_Atomic_word main(int argc, char *argv[]) {
    if (argc > 1)
        freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout);
    
    int t=1;
	fr(t);
    while(t--)SOL::solve(),SOL::clear();
    
    return EXIT_SUCCESS;
}
/*
  _ _       _
 | | |___ _| |_____ _ _ _ _ _  _
 | | / / '_| / / -_) '_| '_| || |
 |_|_\_\_| |_\_\___|_| |_|  \_, |
                            |__/
*/