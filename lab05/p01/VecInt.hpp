#ifndef VECINT_HPP
#define VECINT_HPP

#ifdef AUCA_DEBUG
#include <string>
#endif

#include <cstddef>
#include <iostream>

class VecInt
{
    int *data;
    size_t sz;
    size_t cp;

public:
    using Iter = int *;
    using CIter = const int *;
    VecInt()
        : data(nullptr), sz(0), cp(0)
    {
    }

    VecInt(size_t aSz, int initValue = 0)
        : data(new int[aSz]), sz(aSz), cp(aSz)
    {
        for (size_t i = 0; i < sz; i++)
        {
            data[i] = initValue;
        }
    }

    ~VecInt()
    {
        std::cout << "~VecInt: " << sz << " integer released" << std::endl;
        delete[] data;
    }

    std::size_t size() const
    {
        return sz;
    }

    Iter begin()
    {
        return data;
    }
    Iter end()
    {
        return data + sz;
    }

    CIter begin() const
    {
        return data;
    }

    CIter end() const
    {
        return data + sz;
    }

    const int &operator[](std::size_t index) const
    {
#ifdef AUCA_DEBUG
        if (sz <= index)
        {
            throw std::runtime_error("VecInt: Incorrect index value " + std::to_string(index));
        }
#endif
        return data[index];
    }

    int &operator[](std::size_t index)
    {
#ifdef AUCA_DEBUG
        if (sz <= index)
        {
            throw std::runtime_error("VecInt: Incorrect index value " + std::to_string(index));
        }
#endif
        return data[index];
    }

    void pushBack(int x);
};

#endif