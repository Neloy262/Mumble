import sys, Ice
import MumbleServer
print(Ice.stringVersion())
with Ice.initialize(sys.argv) as communicator:
    base = communicator.stringToProxy("Meta:tcp -h 127.0.0.1 -p 6502")

    meta = MumbleServer.MetaPrx.checkedCast(base)
    server = meta.getAllServers()[0]
    # server.createGroup("new_grp7")
    channellist = list(server.getChannels().keys())
    print(channellist) 

    # u = server.
    # server.addChannelsToGroup(channellist[0:3],6)
    userlist = list(server.getUsers().values())
    # print(userlist)

    server.AddUserToChannel(userlist,channellist[5:6],11)
    # userlist[1].channel = 23
    # server.setState(userlist[1])

    # server.AddUserToChannel()
    # print(userlist[1])
    # server.addUsersToGroup(userlist[0:2],6)
#     # print(meta.getVersion())
  
    # print(type(users[1]))
    # print(server.())
