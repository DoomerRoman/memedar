/*
 * SPDX-License-Identifier: GPL-3.0-or-later

 * Copyright (C) 2019 Roman Erdyakov

 * This file is part of Memedar (flashcard system)
 * Memedar is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */


#ifndef MEMEDAR_MODEL_DAL_SQLITE_DECK_GENERATOR_HPP
#define MEMEDAR_MODEL_DAL_SQLITE_DECK_GENERATOR_HPP


namespace md::model::dal::sqlite::adapter {
	class connector;
}
namespace md::model::dal::sqlite {
	class deck_generator;
}


class md::model::dal::sqlite::deck_generator : public md::model::dal::deck_generator
{
public:
	explicit deck_generator(md::model::dal::sqlite::adapter::connector& connector);
	
	std::optional<md::model::deck::deck> get_deck() override;
protected:
	md::model::dal::sqlite::adapter::connector& m_conn;
	md::model::dal::sqlite::deck_index m_ind;
};


#endif // MEMEDAR_MODEL_DAL_SQLITE_DECK_GENERATOR_HPP
