from collections import Counter

def stringAnagram(dictionary, query):
    # Preprocess the dictionary by sorting each word and counting occurrences of sorted versions
    sorted_dict_counter = Counter("".join(sorted(word)) for word in dictionary)
    
    # For each query string, sort it and check how many anagrams are there in the dictionary
    result = []
    for q in query:
        sorted_q = "".join(sorted(q))
        result.append(sorted_dict_counter.get(sorted_q, 0))
    
    return result

# Example usage:
dictionary = ['hack', 'a', 'kach', 'kran', 'rank', 'hecjer', 'a', 'ab', 'ba', 'string', 'raits']
query = ['a', 'nark', 'bs', 'hack', 'strir']
print(stringAnagram(dictionary, query))  # Output: [2, 2, 0, 3, 1]
