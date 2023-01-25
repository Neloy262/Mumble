import sys, Ice
import MumbleServer
print(Ice.stringVersion())
with Ice.initialize(sys.argv) as communicator:
    base = communicator.stringToProxy("Meta:tcp -h 127.0.0.1 -p 6502")

    meta = MumbleServer.MetaPrx.checkedCast(base)
    server = meta.getAllServers()[0]
    userlist = list(server.getRegisteredUsers("").keys())
    print(userlist)
    server.addUsersToGroup(userlist,4)
#     # print(meta.getVersion())
  
    # print(type(users[1]))
    # print(server.())
