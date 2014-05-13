#ifdef __WIN32
extern "C" __declspec(dllexport) void cn_slow_hash(char *data, size_t length, char *hash);
#else
extern "C" __attribute__ ((dllexport)) void cn_slow_hash(char *data, size_t length, char *hash);
#endif