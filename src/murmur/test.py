import sys, Ice
import MumbleServer

with Ice.initialize(sys.argv) as communicator:
    base = communicator.stringToProxy("Meta:tcp -h 127.0.0.1 -p 6502")

    meta = MumbleServer.MetaPrx.checkedCast(base)
    server = meta.getAllServers()[0]
    # print(meta.getVersion())
    
    user_list = list(server.getUsers().values())
    
    channel_list = list(server.getChannels().values())

    channelids = [24,27]

    server.AddUserToChannel(user_list,channel_list,channelids,6)
    # print(type(users[1]))
    # print(server.())
