/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 22:23:15 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/17 06:36:54 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>
#include <set>

class NotFound : public std::exception
{
    const char * what() const _NOEXCEPT
    {
        return ("Number Not found in the Container.");
    }
};

template <typename T>
void    easyfind(T Container, int n)
{
	typename T::iterator  it = std::find(Container.begin(), Container.end(), n);
    if (it != Container.end())
        std::cout << n <<" Found in Container " << std::endl;
    else 
        throw NotFound();
}

int main()
{
    int Array[6] = {111, 21, 33, 46, 95, 76};
    
    std::vector<int> vct;
    std::set<int> set;
    std::list<int> lst;

    for (int i = 0; i < 6 ; i++)
    {
        vct.push_back(Array[i]);
        lst.push_back(Array[i]);
        set.insert(Array[i]);
    }

    try
    {
        easyfind(vct, 21);
        easyfind(set, 21);
        easyfind(lst, 21);
        easyfind(lst, 22);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
