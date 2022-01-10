![](img/logo.png "toSS")

# Build Instructions

```bash
git clone https://github.com/kushagraa-j/toSS.git && cd toSS
g++ *.cpp -o toss
```

# Usage Instructions

```bash
./toss
```

# Debug mode

To enable debug mode, edit the file `headers/debug.hpp`, change `NODEBUG` to `DEBUG`.
The file should looks like this,

```cpp
/* Debug */

#ifndef debug
#define debug

#define NODEBUG

#endif
```
