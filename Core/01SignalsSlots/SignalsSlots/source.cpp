#include "source.h"

Source::Source(QObject *parent)
    : QObject{parent}
{

}

void Source::test()
{
    emit mySignal("Signal Message ...");
}
