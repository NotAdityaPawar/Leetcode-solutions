class BrowserHistory:

    def __init__(self, homepage: str):
        self.stack1 = []
        self.stack2 = []
        self.curr = homepage

    def visit(self, url: str) -> None:
        self.stack1.append(self.curr)
        self.curr = url
        self.stack2 = []
    def back(self, steps: int) -> str:
        while steps>0 and self.stack1:
            self.stack2.append(self.curr)
            self.curr = self.stack1.pop()
            steps -= 1
            
        return self.curr
            

    def forward(self, steps: int) -> str:
        while steps>0 and self.stack2:
            self.stack1.append(self.curr)
            self.curr = self.stack2.pop()
            steps -= 1
            
        return self.curr


# Your BrowserHistory object will be instantiated and called as such:
# obj = BrowserHistory(homepage)
# obj.visit(url)
# param_2 = obj.back(steps)
# param_3 = obj.forward(steps)