
#include <project/DataSource.h>

int __init__DataSource__(DataSource* self, int source, int channel, unsigned int value, unsigned int time) 
{
    self->source = source; 
    self->channel = channel; 
    self->value = value; 
    self->time = time; 
    
    return ERR_NONE;
}