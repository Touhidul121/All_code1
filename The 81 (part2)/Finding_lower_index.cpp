let left = 0
let right = array.length
let mid = 0

while (left < right) {
    mid = Math.floor((left + right) / 2)
    if (searchValue < array[mid]) {
        right = mid
    } else {
        left = mid + 1
    }
}

return left - 1
