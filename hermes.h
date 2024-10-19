#ifndef HERMES
#define HERMES

//structure that hold the clear packet, with his value and his key
typedef struct ClearPacket{
    char msg[1024];
    char key[256];
} ClearPacket;


//structure that hold the crypted packet, with only the value
typedef struct RawPacket{
    char msg[1024];
} RawPacket;

RawPacket hermes_in(ClearPacket packet);//cryptage function
ClearPacket hermes_out(RawPacket packet);//decryptage function

#endif