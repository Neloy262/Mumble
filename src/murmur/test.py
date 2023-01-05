import sys, Ice
import MumbleServer

with Ice.initialize(sys.argv) as communicator:
    base = communicator.stringToProxy("Meta:tcp -h 127.0.0.1 -p 6502")

    meta = MumbleServer.MetaPrx.checkedCast(base)
    server = meta.getAllServers()[0]
    print(meta.getVersion())
    print(server.getRegisteredUsers(""))
    # print(server.())

