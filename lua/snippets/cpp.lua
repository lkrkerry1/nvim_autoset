local ls = require "luasnip"
local s = ls.snippet
local t = ls.text_node
local i = ls.insert_node
local f = ls.function_node

local snippets = {
  s("oim", {
    t {
      "#include <bits/stdc++.h>",
      "using namespace std;",
      "template <typename T>inline void fr(T &num){num = 0;short sign = 1;char ch = std::getchar();while (ch < '0' || ch > '9'){if (ch == '-')sign = -1;ch = std::getchar();}while (ch >= '0' && ch <= '9')num = num * 10 + ch - '0', ch = getchar();num = num * sign;}",
      "template <typename T>inline void fw(T x){if (x < 0)std::putchar('-'), x = -x;if (x > 9)fw(x / 10);std::putchar(x % 10 + '0');}",
      "",
      "int main(){",
      '//freopen("',
    },
    i(1),
    t { '.in","r",stdin);', '//freopen("' },
    f(function(args, snip, user_arg_1)
      return user_arg_1 .. args[1][1]
    end, { 1 }, { user_args = { "" } }),
    t { '.out","w",stdout);', "cin.tie(0)->sync_with_stdio(0);", "" },
    i(0),
    t { "", "return 0;" },
    t { "", "}" },
  }),
}
return snippets
