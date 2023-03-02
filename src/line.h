#include "point.h"

namespace miit::math
{
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
				point left;

				/**
					* @brief правая точка
					*/
				point right;
			public:
				/**
				 * @brief создать новую линию
				 * 
				 * @param left левая точка
				 * @param right правая точка
				 */
				explicit line(point left, point right);

				/**
				 * @brief получить левую точку
				 */
				const point getLeft() const;

				/**
				 * @brief получить правую точку
				 */
				const point getRight() const;
    };
}