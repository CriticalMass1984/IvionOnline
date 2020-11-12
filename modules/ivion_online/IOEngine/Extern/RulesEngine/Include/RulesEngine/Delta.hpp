#pragma once

namespace RE {
class Delta {
public:
	Delta(Delta &&) noexcept = default;
	Delta(const Delta &) = delete;

	virtual void Apply() const noexcept = 0;
	virtual void Revert() const noexcept = 0;


    virtual ~Delta() = default;
protected:
	Delta() = default;
};
} // namespace RE