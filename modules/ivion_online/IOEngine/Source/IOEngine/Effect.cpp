#include <IOEngine/Effect_GENERATED.hpp>

#include <cassert>

namespace IO {
bool __GetList(GameInstance *instance, google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath> *Result, IvionOnline::ObjectPath *Source){
    
}
bool __SelectMultiple(GameInstance *instance, google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath> *Source, IvionOnline::Integer *Number, IvionOnline::Boolean *UpTo){
    
}
bool __SelectExactlyOne(GameInstance *instance, google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath> *Source){
    
}
bool __AssertControlOrHeroic(GameInstance *instance){
    
}
bool __AssertControllerHasPriority(GameInstance *instance){
    
}
bool __AssertStackEmptyOrInstant(GameInstance *instance){
    
}
bool __PayCost(GameInstance *instance, IvionOnline::Player *Player, IvionOnline::Card *Card, IvionOnline::Integer *ActionCostReduction, IvionOnline::Integer *PowerCostReduction, IvionOnline::Integer *CostReduction, IvionOnline::Boolean *Free){
    
}
bool __PlayGainResources(GameInstance *instance, IvionOnline::Player *Player, IvionOnline::Card *Card){
    
}
bool __RefundCost(GameInstance *instance, IvionOnline::Player *Player, IvionOnline::Card *Card){
    
}
bool __GainActions(GameInstance *instance, IvionOnline::Player *Player, IvionOnline::Integer *Value){
    
}
bool __GainPower(GameInstance *instance, IvionOnline::Player *Player, IvionOnline::Integer *Value){
    
}
bool __Move(GameInstance *instance, IvionOnline::Player *Player, IvionOnline::Tile *Destination){
    
}
bool __Travel(GameInstance *instance, IvionOnline::Player *Player, IvionOnline::Tile *Destination){
    
}
bool __Damage(GameInstance *instance, IvionOnline::Player *Player, IvionOnline::Integer *Amount){
    
}
bool __ObjectPath_Constant(GameInstance *instance, IvionOnline::ObjectPath *Result){
    
}
bool __Boolean_Constant(GameInstance *instance, IvionOnline::Boolean *Result){
    
}
bool __Integer_Constant(GameInstance *instance, IvionOnline::Integer *Result){
    
}
bool __Vec2i_Constant(GameInstance *instance, IvionOnline::Vec2i *Result){
    
}
bool __Terrain_Constant(GameInstance *instance, IvionOnline::Terrain *Result){
    
}
bool __Color_Constant(GameInstance *instance, IvionOnline::Color *Result){
    
}
} // namespace IO