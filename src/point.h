#include <iostream>

namespace miit::math
{
	/**
	 * @brief математическое представление точки в пространстве
	 */
	class point
	{
		private:
			/**
			 * @brief координата по оси x
			 */
			double x;

			/**
			 * @brief координата по оси y
			 */
			double y;
		public:
			/**
			 * @brief создаёт новую точку
			 * 
			 * @param x координата по оси x
			 * @param y координата по оси y
			 */
			explicit point(const double x = 0, const double y = 0);

			/**
			 * @brief экстраполятор нулевого порядка 
			 * 
			 * @param x2 абсцисса правой точки
			 * @return ордината правой точки 
			 */
			double extrapolate(double x2) const;
			
			/**
			 * @brief конвертироать точку в строку
			 * 
			 * @return const std::string 
			 */
			const std::string toString() const;

			/**
			 * @brief получить абсциссу точки
			 * 
			 * @return const double 
			 */
			const double getX() const;

			/**
			 * @brief получить ординату точки
			 * 
			 * @return const double 
			 */
			const double getY() const;

            /**
             * @brief перенаправить точку в строковом представлении в поток вывода
             * 
             * @param stream поток вывода
             * @param self точка
             * @return std::ostream& поток вывода
             */
			friend std::ostream& operator<<(std::ostream& stream, const point& self)
			{
				return stream << self.toString();
			}
	};
}