import Engine.Mutation as mut

class Vec2i:
    class Mutation(mut.Mutation):
        def __init__(self, obj, x: int, y: int):
            self.Value = obj
            self.OldValue = (obj._x, obj._y)
            self.NewValue = (x, y)
            self.Apply()
        
        def Apply(self):
            self.Value._x = self.NewValue[0]
            self.Value._y = self.NewValue[1]
            print("Apply: Vec2i {} <-= ({}, {})".format(self.Value, self.Value._x, self.Value._y))
        
        def Revert(self):
            self.Value._x = self.OldValue[0]
            self.Value._y = self.OldValue[1]
            print("Revert: Vec2i {} <-= ({}, {})".format(self.Value, self.Value._x, self.Value._y))

    def __init__(self, x: int = 0, y: int = 0):
        self._x = x
        self._y = y

    def Set(self, x: int = None, y: int = None, vec = None):
        if vec is not None:
            return Vec2i.Mutation(self, vec._x, vec._y)
        assert(x is not None and y is not None)
        return Vec2i.Mutation(self, x, y)

    def X(self):
        return self._x

    def Y(self):
        return self._y

    def Get(self):
        return self

    def Distance(self, B):
        return abs(self._x - B._x) + abs(self._y - B._y)

    def Clone(self):
        return Vec2i(self._x, self._y)