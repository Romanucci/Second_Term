#include <string>

namespace miit::math
{
	/**
	 * @brief математическое представление точки в пространстве
	 */
	class dot
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
			explicit dot(double x = 0, double y = 0);

			/**
			 * @brief экстраполятор нулевого порядка 
			 * 
			 * @param x2 абсцисса правой точки
			 * @return ордината правой точки 
			 */
			const double extrapolate(double x2) const;
			
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

			// Назначение операторов

			friend std::ostream& operator<<(std::ostream& stream, const dot& self)
			{
				return stream << self.toString();
			}
	};

	/**
     * @brief класс, реализующий математический отрезок
     * 
     */
    class line
    {
			private:
				/**
					* @brief левая точка
					*/
				dot left;

				/**
					* @brief правая точка
					*/
				dot right;
			public:
				/**
				 * @brief создать новую линию
				 * 
				 * @param left левая точка
				 * @param right правая точка
				 */
				explicit line(dot left, dot right);

				/**
				 * @brief получить левую точку
				 */
				const dot getLeft() const;

				/**
				 * @brief получить правую точку
				 */
				const dot getRight() const;
    };
}