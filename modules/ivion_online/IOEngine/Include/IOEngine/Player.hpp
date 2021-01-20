#pragma once

#include <IOEngine/Entity.hpp>
#include <IOEngine/Types.hpp>

namespace IO {
class Player : public Entity {
	PlayerIndex selfIndex_;
	TeamIndex team_;

public:
	Player(PlayerIndex i, TeamIndex team) noexcept;

	IntegerIndex Health;
	Vec2iIndex Position;

	IntegerIndex Slow;
	IntegerIndex Silence;
	IntegerIndex Disarm;
	
	IntegerIndex SecondWindUses;

	// does whatever the second wind does
	void SecondWind();

	inline bool IsControlled() const noexcept {return *Slow > 0 || *Silence > 0 || *Disarm > 0;}
	inline bool IsUncontrolled() const noexcept {return *Slow == 0 && *Silence == 0 && *Disarm == 0;}

	PlayerIndex Index() const noexcept { return selfIndex_; }
	TeamIndex Team() const noexcept { return team_; }

	inline bool IsAlly(const Player &B) const noexcept { return (selfIndex_ != B.selfIndex_) && ((team_ & B.team_) > 0); }
	inline bool IsEnemy(const Player &B) const noexcept { return (team_ ^ B.team_) > 0; }
	inline bool operator==(const Player &B) const noexcept { return selfIndex_ == B.selfIndex_; }

	const Vec2i &GetPosition() const noexcept override;
};
} // namespace IO