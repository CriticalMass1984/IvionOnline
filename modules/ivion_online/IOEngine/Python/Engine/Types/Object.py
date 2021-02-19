import Engine.Mutation as mut

class Object:
    class SetMutation(mut.Mutation):
        def __init__(self, obj, key: str, val):
            self.Value = obj
            self.NewValue = val
            self.OldValue = obj.Get(key)
            self.Key = key
            self.Apply()
        
        def Apply(self):
            self.Value._value[self.Key] = self.NewValue
        
        def Revert(self):
            self.Value._value[self.Key] = self.OldValue

    class InsertMutation(mut.Mutation):
        def __init__(self, obj, key: str, val):
            self.Value = obj
            self.NewValue = val
            self.Key = key
            self.Apply()
        
        def Apply(self):
            self.Value._value[self.Key] = self.NewValue
        
        def Revert(self):
            del self.Value._value[self.Key]

    class RemoveMutation(mut.Mutation):
        def __init__(self, obj, key: str):
            self.Value = obj
            self.OldValue = obj.Get(key)
            self.Key = key
            self.Apply()
        
        def Apply(self):
            del self.Value._value[self.Key]
        
        def Revert(self):
            self.Value._value[self.Key] = self.OldValue

    def __init__(self, value: dict = None):
        if value is None:
            self._value = dict()
        else:
            self._value = value

    def Set(self, key: str, val):
        if key in self._value:
            return Object.SetMutation(self, val, key)
        else:
            return Object.InsertMutation(self, val, key)

    def Remove(self, key: str):
        return Object.RemoveMutation(self, key)

    def Get(self, key: str):
        return self._value[key]

    # both keys and value pairs
    def Items(self):
       return self._value.items()

    def __iter__(self):
       return self._value.__iter__()
    
    def Clone(self):
        copy = dict()
        for k, v in self._value.items():
            copy[k] = v
        return Object(copy)
