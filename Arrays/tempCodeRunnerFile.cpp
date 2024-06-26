 // Add remaining elements of arr1, if any
    while (i < n)
    {
        if (i == 0 || arr1[i] != arr1[i - 1])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    // Add remaining elements of arr2, if any
    while (j < m)
    {
        if (j == 0 || arr2[j] != arr2[j - 1])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }