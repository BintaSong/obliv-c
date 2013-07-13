#ifndef OBLIV_H
#define OBLIV_H

#include<obliv_types.h>

// This header should only have functions directly used by the user,
//   not functions that will appear in the generated C code.
//   Moreover, including this function in an obliv-C file should still
//   keep it a valid obliv-C file after preprocessing. So e.g., no magic
//   conversion from obliv int to OblivBits* inside inline functions.
//   In fact, user code should never be aware of OblivBits type.

void protocolUseStdio(ProtocolDesc*);
void cleanupProtocol(ProtocolDesc*);

void setCurrentParty(ProtocolDesc* pd, int party);
void execDebugProtocol(ProtocolDesc* pd, protocol_run start, void* arg);
void   execYaoProtocol(ProtocolDesc* pd, protocol_run start, void* arg);

#endif // OBLIV_H
