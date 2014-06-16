//header file
#define lab5templates_h

//template protrotypes
template <class type> type minOfTwo(type num1, type num2);

template <class type> type minOfThree(type num1, type num2, type num3);

template <class type> type maxOfTwo(type num1, type num2);

template <class type> type maxOfThree(type num1, type num2, type num3);

//templates
template<class type> type minOfTwo(type num1, type num2)
{
type min = num1;

if(num2 < min)
{
min = num2;
}
return min;

}

template<class type> type minOfThree(type num1, type num2, type num3)
{
type min = num1;

if(num2 < min)
{
min = num2;
}

if(num3 < min)
{
min = num3;
}

return min;
}

template<class type> type maxOfTwo(type num1, type num2)
{
type max = num1;

if(num2 > max)
{
max = num2;
}
return max;

}

template<class type> type maxOfThree(type num1, type num2, type num3)
{
type max = num1;

if(num2 > max)
{
max = num2;
}

if(num3 > max)
{
max = num3;
}

return max;
}

