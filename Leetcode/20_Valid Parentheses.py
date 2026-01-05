class Solution:
    def isValid(self, s):
        hashmap = {")": "(", "}": "{", "]": "["}
        stack = []

        for c in s:
            if c not in hashmap:
                stack.append(c)
            else:
                if not stack:
                    return False
                top = stack.pop()
                if top != hashmap[c]:
                    return False

        return not stack
