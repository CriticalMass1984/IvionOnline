import random
import Engine.NetworkIO.GameInfo_pb2 as NIO

class RandomAgent:
    def __init__(self, info: NIO.RandomAgent):
        pass

    def MakeChoices(self, paths: list):
        def MakeChoice(options: list):
            return random.choice([i for i, option in zip(range(len(options)), options) if option[-1] is True])

        choices = list()
        while True:
            if len(paths) < 2:
                break
            options = paths[-2]
            if not isinstance(options, list):
                break
            valid = paths[-1]
            if not valid:
                raise Exception("NO VALID PATHS!")

            choice = MakeChoice(options)

            paths = options[choice]
            choices.append(choice)

        return choices
