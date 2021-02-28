import Engine.Mutation as mut

class Integer:
    class Mutation(mut.Mutation):
        def __init__(self, obj, val: int):
            self.Container = obj
            self.OldValue = obj._value
            self.NewValue = val
            self.Apply()
        
        def Apply(self):
            self.Container._value = self.NewValue
            print("Integer {} <-= {}".format(self.Container, self.Container._value))
        
        def Revert(self):
            self.Container._value = self.OldValue
            print("Integer {} <-= {}".format(self.Container, self.Container._value))

    def __init__(self, value: int = 0):
        self._value = value

    def Set(self, val: int):
        return Integer.Mutation(self, val)

    def Get(self):
        return self._value

    def Clone(self):
        return Integer(self._value)