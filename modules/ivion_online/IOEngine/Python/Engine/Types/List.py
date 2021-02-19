import Engine.Mutation as mut

class List:
    class SetMutation(mut.Mutation):
        def __init__(self, obj, index: int, val):
            self.Value = obj
            self.NewValue = val
            self.OldValue = obj.Get(index)
            self.Index = index
            self.Apply()
        
        def Apply(self):
            self.Value._value[self.Index] = self.NewValue
        
        def Revert(self):
            self.Value._value[self.Index] = self.OldValue

    class InsertMutation(mut.Mutation):
        def __init__(self, obj, index: int, val):
            self.Value = obj
            self.NewValue = val
            self.Index = index
            self.Apply()
        
        def Apply(self):
            self.Value._value.insert(self.Index, self.NewValue)
        
        def Revert(self):
            del self.Value._value[self.Index]

    class RemoveMutation(mut.Mutation):
        def __init__(self, obj, index: int):
            self.Value = obj
            self.OldValue = obj.Get(index)
            self.Index = index
            self.Apply()
        
        def Apply(self):
            del self.Value._value[self.Index]
        
        def Revert(self):
            self.Value._value.insert(self.Index, self.OldValue)

    def __init__(self, value: list = None):
        if value is None:
            self._value = list()
        else:
            self._value = value

    def Set(self, index: int, val):
        return List.SetMutation(self, index, val)

    def Insert(self, index: int, val):
        return List.InsertMutation(self, index, val)

    def Append(self, val):
        return List.InsertMutation(self, len(self), val)

    def Remove(self, index: int):
        return List.RemoveMutation(self, index)

    def Get(self, index: int):
        return self._value[index]

    def __iter__(self):
       return self._value.__iter__()

    def __len__(self):
       return self._value.__len__()

    def Clone(self):
        return List([x for x in self._value])