#include "DataStore.h"

DataStore& DataStore::getInstance()
{
    static DataStore instance;
    return instance;
}
