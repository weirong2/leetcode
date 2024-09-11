class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        tokens = [int(x) if x not in ["+", "-", "*", "/"] else x for x in tokens]
        while len(tokens) > 1:
            #print("i", tokens, len(tokens))
            for i in range(len(tokens) - 2):
                if isinstance(tokens[i], int) and \
                   isinstance(tokens[i+1], int) and \
                   tokens[i+2] in ["+", "-", "*", "/"]:
                    tmp = tokens[i] + tokens[i+1] if tokens[i+2] == "+" else \
                        tokens[i] - tokens[i+1] if tokens[i+2] == "-" else \
                        tokens[i] * tokens[i+1] if tokens[i+2] == "*" else \
                        tokens[i] / tokens[i+1]
                    tokens[i] = int(tmp)
                    tokens.pop(i+2)
                    tokens.pop(i+1)
                    break
            #print("o", tokens, len(tokens))
        return tokens[0]