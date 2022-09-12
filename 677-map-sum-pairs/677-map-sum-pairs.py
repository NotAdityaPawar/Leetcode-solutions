class MapSum:

    def __init__(self):
        self.dic = {}

    def insert(self, key: str, val: int) -> None:
        self.dic[key] = val

    def sum(self, prefix: str) -> int:
        s = 0
        for i in self.dic:
            if i.startswith(prefix):
                s += self.dic[i]
                
        return s


# Your MapSum object will be instantiated and called as such:
# obj = MapSum()
# obj.insert(key,val)
# param_2 = obj.sum(prefix)