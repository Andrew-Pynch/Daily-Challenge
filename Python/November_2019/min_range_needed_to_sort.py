def find_range(nums):
    nums = list(nums)

    range_start = 0
    range_end = 0
    for i in range(len(nums)):
        if nums[i + 1] < nums[i]:
            range_end = i
            break

    print
