def count_substring(string, sub_string):
    string = list(string)
    # print(string)
    sub_string = list(sub_string)
    # print(sub_string)

    sub_string_count = 0
    for i in range(len(string) - 2):
        if string[i] == sub_string[0] and string[i + 2] == sub_string[-1]:
            sub_string_count += 1

    return (sub_string_count)


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()

    count = count_substring(string, sub_string)
    print(count)