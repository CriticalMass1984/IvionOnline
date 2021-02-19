import json
from Engine.NetworkIO.GameInfo_pb2 import GameInfo
from google.protobuf.json_format import Parse
from Engine.GameInstance import GameInstance

import time

start = time.time()
message = Parse(json.dumps({
    "Players": [
        {
            "Username": "Player1",
            "UID": "1",
            "Deck": {
                "Ultimate": {
                    "Name" : "TestUltimate",
                    "Archetype" : "TestArch",
                    "Count" : 0,
                    "Ultimate" : True,
                    "Feat" : True,
                    "Colors": [],
                    "PlayEffects" : "",
                    "ResolveEffects" : "",
                },
                "Feats": [],
                "Deck": [],
            },
            "StartingPosition": {
                "X": 0,
                "Y": 0,
            },
            "RandomAgent": {}
        }
    ],
    "MapSize": {
        "X": 4,
        "Y": 4,
    },
}), GameInfo())
end = time.time()


print(end - start)
print(message)

if __name__ =="__main__":
    instance = GameInstance(message)
    instance.AdvanceGameState()