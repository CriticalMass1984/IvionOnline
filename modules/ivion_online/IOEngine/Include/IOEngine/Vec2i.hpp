#pragma once

#include <memory>
#include <type_traits>
#include <unordered_map>
#include <vector>

#include <GRPC/GameState.pb.h>

struct Vec2i {
	int x{0}, y{0};

	Vec2i() = default;
	~Vec2i() = default;

	Vec2i(const IvionOnline::Vec2i& vec): x(vec.x()), y(vec.y())
	{

	}

	void Fill(IvionOnline::Vec2i* vec) const noexcept
	{
		vec->set_x(x);
		vec->set_y(y);
	}

	int Distance(const Vec2i& v) const noexcept
	{
		return std::abs(v.x - this->x) + std::abs(v.y - this->y);
	}
};