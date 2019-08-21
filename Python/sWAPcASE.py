# Input a string and swap the case of every letter!

def swap_case(s):
    # Split string into a list of characters
    chars = list(s)

    for i in range(len(chars)):
        if chars[i].isupper() == True:
            chars[i] = chars[i].lower()
        elif chars[i].islower() == True:
            chars[i] = chars[i].upper()

    chars = ''.join(chars)

    return(chars)

if __name__ == '__main__':