#include "Singleton.h"

Singleton* Singleton::instance_ = nullptr;
std::mutex Singleton::m_mutex_;