def compress_string(s):
    compressed = []
    count = 1

    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            count += 1  # Increment the count for repeated characters
        else:
            compressed.append(s[i - 1] + str(count))
            count = 1  # Reset the count for the next character

    compressed.append(s[-1] + str(count))
    compressed_string = ''.join(compressed)
    return compressed_string if len(compressed_string) < len(s) else s

input_string = "aaaaaaa"
print(compress_string(input_string))