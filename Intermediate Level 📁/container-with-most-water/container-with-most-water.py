def find_max_water(walls):
    start = 0
    end = len(walls) - 1
    max_volume = 0

    while start < end:
        width = end - start
        height = min(walls[start], walls[end])
        current_volume = width * height

        max_volume = max(max_volume, current_volume)

        if walls[start] < walls[end]:
            start += 1
        else:
            end -= 1

    return max_volume


if __name__ == "__main__":
    walls = [3, 1, 2, 5, 4, 7, 3, 8, 6]
    print("Maximum water that can be contained:", find_max_water(walls))
