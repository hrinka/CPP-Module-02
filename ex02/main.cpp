/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:17:16 by hrinka            #+#    #+#             */
/*   Updated: 2024/04/22 21:03:29 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int	main(void)
// {
// 	Fixed	a;
// 	Fixed const	b(Fixed(5.05f) * Fixed(2));

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max(a, b) << std::endl;
// 	return (0);
// }

#include <iostream>

int main() {
    // デフォルトコンストラクタと出力テスト
    Fixed a;
    std::cout << "Default constructor: " << a << std::endl;

    // 浮動小数点数を使った初期化と出力
    Fixed b(3.14159f);
    std::cout << "Float constructor: " << b << std::endl;

    // 整数を使った初期化と出力
    Fixed c(10);
    std::cout << "Integer constructor: " << c << std::endl;

    // コピー初期化と代入
    Fixed d(b);
    std::cout << "Copy constructor: " << d << std::endl;
    Fixed e;
    e = c;
    std::cout << "Assignment operator: " << e << std::endl;

    // 算術演算子
    Fixed result = b + c;
    std::cout << b << " + " << c << " = " << result << std::endl;

    result = b - c;
    std::cout << b << " - " << c << " = " << result << std::endl;

    result = b * c;
    std::cout << b << " * " << c << " = " << result << std::endl;

    result = b / c;
    std::cout << b << " / " << c << " = " << result << std::endl;

    // 比較演算子
    std::cout << b << " == " << c << " : " << (b == c) << std::endl;
    std::cout << b << " != " << c << " : " << (b != c) << std::endl;
    std::cout << b << " < " << c << " : " << (b < c) << std::endl;
    std::cout << b << " > " << c << " : " << (b > c) << std::endl;
    std::cout << b << " <= " << c << " : " << (b <= c) << std::endl;
    std::cout << b << " >= " << c << " : " << (b >= c) << std::endl;

    // インクリメント／デクリメント
    std::cout << "Pre-increment: " << ++a << std::endl;
    std::cout << "Post-increment: " << a++ << std::endl;
    std::cout << "After post-increment: " << a << std::endl;
    std::cout << "Pre-decrement: " << --a << std::endl;
    std::cout << "Post-decrement: " << a-- << std::endl;
    std::cout << "After post-decrement: " << a << std::endl;

    // Min and Max
    std::cout << "Min of " << b << " and " << c << ": " << Fixed::min(b, c) << std::endl;
    std::cout << "Max of " << b << " and " << c << ": " << Fixed::max(b, c) << std::endl;

    // 型変換機能
    std::cout << b << " as int = " << b.toInt() << std::endl;
    std::cout << c << " as float = " << c.toFloat() << std::endl;

    return 0;
}
