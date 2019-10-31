def find_range(nums):
    nums = list(nums)

    range_start = 0
    range_end = 0
    for i in range(len(nums) - 1):
        if nums[i + 1] < nums[i]:
            range_end = i
            continue
            

    print("Minimum range needed to sort lies between %s and %s" % (range_start, range_end))

find_range([1, 7, 9, 5, 7, 8, 10])