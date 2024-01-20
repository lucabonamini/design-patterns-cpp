#pragma once


class Coffee {
public:
    virtual void brew() const = 0;
    virtual ~Coffee() = default;
};