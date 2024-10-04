const selectionSort = (arr) => {
    for (let i = 0; i < arr.length - 1; i++) {
        let lowest;

        for (let j = i + 1; j < arr.length; j++) {
            if (arr[i][0] > arr[j][0]) {
                if (lowest !== undefined) {
                    if (arr[lowest] > arr[j]) {
                        lowest = j;
                    }
                } else {
                    lowest = j;
                }
            }
        }

        if (lowest !== undefined) {
            [arr[i], arr[lowest]] = [arr[lowest], arr[i]];
        }
    }

    return arr;
}

function maximumCpuLoad(arr) {
    const sorted = selectionSort(arr);
    let total = 0;

    let current = sorted[0];
    let isMerge = false;
    let totalCount = [current[2]];

    for (let i = 1; i < sorted.length; i++) {
        const currentElement = sorted[i];
        totalCount.push(currentElement[2]);

        if (current[0] <= currentElement[0] && current[1] >= currentElement[0]) {
            isMerge = true;
            const min = Math.min(current[0], currentElement[0]), max = Math.max(current[1], currentElement[1]);
            const value = current[2] + currentElement[2];

            current = [min, max, value];
            total = Math.max(total, value);

        }
    }

    if (isMerge) {
        return total;
    }

    return Math.max(...totalCount);
}
