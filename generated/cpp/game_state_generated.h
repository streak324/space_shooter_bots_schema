// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_GAMESTATE_H_
#define FLATBUFFERS_GENERATED_GAMESTATE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 25,
             "Non-compatible flatbuffers version included");

struct Vec2;
struct Vec2Builder;

struct MissileSlot;
struct MissileSlotBuilder;

struct Shield;
struct ShieldBuilder;

struct Block;
struct BlockBuilder;

struct Explosion;
struct ExplosionBuilder;

struct Entity;
struct EntityBuilder;

struct Projectile;
struct ProjectileBuilder;

struct Flag;
struct FlagBuilder;

struct GameState;
struct GameStateBuilder;

struct Vec2 FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Vec2Builder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_X = 4,
    VT_Y = 6
  };
  float x() const {
    return GetField<float>(VT_X, 0.0f);
  }
  float y() const {
    return GetField<float>(VT_Y, 0.0f);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_X, 4) &&
           VerifyField<float>(verifier, VT_Y, 4) &&
           verifier.EndTable();
  }
};

struct Vec2Builder {
  typedef Vec2 Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_x(float x) {
    fbb_.AddElement<float>(Vec2::VT_X, x, 0.0f);
  }
  void add_y(float y) {
    fbb_.AddElement<float>(Vec2::VT_Y, y, 0.0f);
  }
  explicit Vec2Builder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Vec2> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Vec2>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Vec2> CreateVec2(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    float x = 0.0f,
    float y = 0.0f) {
  Vec2Builder builder_(_fbb);
  builder_.add_y(y);
  builder_.add_x(x);
  return builder_.Finish();
}

struct MissileSlot FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef MissileSlotBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_IS_LOADED = 4,
    VT_RELOAD_TIMER = 6,
    VT_X = 8,
    VT_Y = 10,
    VT_LOCAL_ROTATION = 12
  };
  bool is_loaded() const {
    return GetField<uint8_t>(VT_IS_LOADED, 0) != 0;
  }
  float reload_timer() const {
    return GetField<float>(VT_RELOAD_TIMER, 0.0f);
  }
  float x() const {
    return GetField<float>(VT_X, 0.0f);
  }
  float y() const {
    return GetField<float>(VT_Y, 0.0f);
  }
  float local_rotation() const {
    return GetField<float>(VT_LOCAL_ROTATION, 0.0f);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_IS_LOADED, 1) &&
           VerifyField<float>(verifier, VT_RELOAD_TIMER, 4) &&
           VerifyField<float>(verifier, VT_X, 4) &&
           VerifyField<float>(verifier, VT_Y, 4) &&
           VerifyField<float>(verifier, VT_LOCAL_ROTATION, 4) &&
           verifier.EndTable();
  }
};

struct MissileSlotBuilder {
  typedef MissileSlot Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_is_loaded(bool is_loaded) {
    fbb_.AddElement<uint8_t>(MissileSlot::VT_IS_LOADED, static_cast<uint8_t>(is_loaded), 0);
  }
  void add_reload_timer(float reload_timer) {
    fbb_.AddElement<float>(MissileSlot::VT_RELOAD_TIMER, reload_timer, 0.0f);
  }
  void add_x(float x) {
    fbb_.AddElement<float>(MissileSlot::VT_X, x, 0.0f);
  }
  void add_y(float y) {
    fbb_.AddElement<float>(MissileSlot::VT_Y, y, 0.0f);
  }
  void add_local_rotation(float local_rotation) {
    fbb_.AddElement<float>(MissileSlot::VT_LOCAL_ROTATION, local_rotation, 0.0f);
  }
  explicit MissileSlotBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<MissileSlot> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<MissileSlot>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<MissileSlot> CreateMissileSlot(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    bool is_loaded = false,
    float reload_timer = 0.0f,
    float x = 0.0f,
    float y = 0.0f,
    float local_rotation = 0.0f) {
  MissileSlotBuilder builder_(_fbb);
  builder_.add_local_rotation(local_rotation);
  builder_.add_y(y);
  builder_.add_x(x);
  builder_.add_reload_timer(reload_timer);
  builder_.add_is_loaded(is_loaded);
  return builder_.Finish();
}

struct Shield FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ShieldBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_IS_DESTROYED = 4,
    VT_HITPOINTS = 6,
    VT_RADIUS = 8
  };
  bool is_destroyed() const {
    return GetField<uint8_t>(VT_IS_DESTROYED, 0) != 0;
  }
  float hitpoints() const {
    return GetField<float>(VT_HITPOINTS, 0.0f);
  }
  float radius() const {
    return GetField<float>(VT_RADIUS, 0.0f);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_IS_DESTROYED, 1) &&
           VerifyField<float>(verifier, VT_HITPOINTS, 4) &&
           VerifyField<float>(verifier, VT_RADIUS, 4) &&
           verifier.EndTable();
  }
};

struct ShieldBuilder {
  typedef Shield Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_is_destroyed(bool is_destroyed) {
    fbb_.AddElement<uint8_t>(Shield::VT_IS_DESTROYED, static_cast<uint8_t>(is_destroyed), 0);
  }
  void add_hitpoints(float hitpoints) {
    fbb_.AddElement<float>(Shield::VT_HITPOINTS, hitpoints, 0.0f);
  }
  void add_radius(float radius) {
    fbb_.AddElement<float>(Shield::VT_RADIUS, radius, 0.0f);
  }
  explicit ShieldBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Shield> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Shield>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Shield> CreateShield(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    bool is_destroyed = false,
    float hitpoints = 0.0f,
    float radius = 0.0f) {
  ShieldBuilder builder_(_fbb);
  builder_.add_radius(radius);
  builder_.add_hitpoints(hitpoints);
  builder_.add_is_destroyed(is_destroyed);
  return builder_.Finish();
}

struct Block FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef BlockBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BLOCK_TYPE = 4,
    VT_FEATURE_FLAGS = 6,
    VT_X = 8,
    VT_Y = 10,
    VT_ROTATION = 12,
    VT_HITPOINTS = 14,
    VT_APPLIED_THRUST = 16,
    VT_IS_DESTROYED = 18,
    VT_MISSILE_SLOTS = 20,
    VT_LOCAL_TURRET_ROTATION = 22,
    VT_SHIELD = 24
  };
  uint32_t block_type() const {
    return GetField<uint32_t>(VT_BLOCK_TYPE, 0);
  }
  uint64_t feature_flags() const {
    return GetField<uint64_t>(VT_FEATURE_FLAGS, 0);
  }
  float x() const {
    return GetField<float>(VT_X, 0.0f);
  }
  float y() const {
    return GetField<float>(VT_Y, 0.0f);
  }
  float rotation() const {
    return GetField<float>(VT_ROTATION, 0.0f);
  }
  float hitpoints() const {
    return GetField<float>(VT_HITPOINTS, 0.0f);
  }
  float applied_thrust() const {
    return GetField<float>(VT_APPLIED_THRUST, 0.0f);
  }
  bool is_destroyed() const {
    return GetField<uint8_t>(VT_IS_DESTROYED, 0) != 0;
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<MissileSlot>> *missile_slots() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<MissileSlot>> *>(VT_MISSILE_SLOTS);
  }
  float local_turret_rotation() const {
    return GetField<float>(VT_LOCAL_TURRET_ROTATION, 0.0f);
  }
  const Shield *shield() const {
    return GetPointer<const Shield *>(VT_SHIELD);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_BLOCK_TYPE, 4) &&
           VerifyField<uint64_t>(verifier, VT_FEATURE_FLAGS, 8) &&
           VerifyField<float>(verifier, VT_X, 4) &&
           VerifyField<float>(verifier, VT_Y, 4) &&
           VerifyField<float>(verifier, VT_ROTATION, 4) &&
           VerifyField<float>(verifier, VT_HITPOINTS, 4) &&
           VerifyField<float>(verifier, VT_APPLIED_THRUST, 4) &&
           VerifyField<uint8_t>(verifier, VT_IS_DESTROYED, 1) &&
           VerifyOffset(verifier, VT_MISSILE_SLOTS) &&
           verifier.VerifyVector(missile_slots()) &&
           verifier.VerifyVectorOfTables(missile_slots()) &&
           VerifyField<float>(verifier, VT_LOCAL_TURRET_ROTATION, 4) &&
           VerifyOffset(verifier, VT_SHIELD) &&
           verifier.VerifyTable(shield()) &&
           verifier.EndTable();
  }
};

struct BlockBuilder {
  typedef Block Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_block_type(uint32_t block_type) {
    fbb_.AddElement<uint32_t>(Block::VT_BLOCK_TYPE, block_type, 0);
  }
  void add_feature_flags(uint64_t feature_flags) {
    fbb_.AddElement<uint64_t>(Block::VT_FEATURE_FLAGS, feature_flags, 0);
  }
  void add_x(float x) {
    fbb_.AddElement<float>(Block::VT_X, x, 0.0f);
  }
  void add_y(float y) {
    fbb_.AddElement<float>(Block::VT_Y, y, 0.0f);
  }
  void add_rotation(float rotation) {
    fbb_.AddElement<float>(Block::VT_ROTATION, rotation, 0.0f);
  }
  void add_hitpoints(float hitpoints) {
    fbb_.AddElement<float>(Block::VT_HITPOINTS, hitpoints, 0.0f);
  }
  void add_applied_thrust(float applied_thrust) {
    fbb_.AddElement<float>(Block::VT_APPLIED_THRUST, applied_thrust, 0.0f);
  }
  void add_is_destroyed(bool is_destroyed) {
    fbb_.AddElement<uint8_t>(Block::VT_IS_DESTROYED, static_cast<uint8_t>(is_destroyed), 0);
  }
  void add_missile_slots(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<MissileSlot>>> missile_slots) {
    fbb_.AddOffset(Block::VT_MISSILE_SLOTS, missile_slots);
  }
  void add_local_turret_rotation(float local_turret_rotation) {
    fbb_.AddElement<float>(Block::VT_LOCAL_TURRET_ROTATION, local_turret_rotation, 0.0f);
  }
  void add_shield(::flatbuffers::Offset<Shield> shield) {
    fbb_.AddOffset(Block::VT_SHIELD, shield);
  }
  explicit BlockBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Block> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Block>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Block> CreateBlock(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t block_type = 0,
    uint64_t feature_flags = 0,
    float x = 0.0f,
    float y = 0.0f,
    float rotation = 0.0f,
    float hitpoints = 0.0f,
    float applied_thrust = 0.0f,
    bool is_destroyed = false,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<MissileSlot>>> missile_slots = 0,
    float local_turret_rotation = 0.0f,
    ::flatbuffers::Offset<Shield> shield = 0) {
  BlockBuilder builder_(_fbb);
  builder_.add_feature_flags(feature_flags);
  builder_.add_shield(shield);
  builder_.add_local_turret_rotation(local_turret_rotation);
  builder_.add_missile_slots(missile_slots);
  builder_.add_applied_thrust(applied_thrust);
  builder_.add_hitpoints(hitpoints);
  builder_.add_rotation(rotation);
  builder_.add_y(y);
  builder_.add_x(x);
  builder_.add_block_type(block_type);
  builder_.add_is_destroyed(is_destroyed);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<Block> CreateBlockDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t block_type = 0,
    uint64_t feature_flags = 0,
    float x = 0.0f,
    float y = 0.0f,
    float rotation = 0.0f,
    float hitpoints = 0.0f,
    float applied_thrust = 0.0f,
    bool is_destroyed = false,
    const std::vector<::flatbuffers::Offset<MissileSlot>> *missile_slots = nullptr,
    float local_turret_rotation = 0.0f,
    ::flatbuffers::Offset<Shield> shield = 0) {
  auto missile_slots__ = missile_slots ? _fbb.CreateVector<::flatbuffers::Offset<MissileSlot>>(*missile_slots) : 0;
  return CreateBlock(
      _fbb,
      block_type,
      feature_flags,
      x,
      y,
      rotation,
      hitpoints,
      applied_thrust,
      is_destroyed,
      missile_slots__,
      local_turret_rotation,
      shield);
}

struct Explosion FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ExplosionBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_X = 4,
    VT_Y = 6,
    VT_RADIUS = 8,
    VT_DAMAGE = 10
  };
  float x() const {
    return GetField<float>(VT_X, 0.0f);
  }
  float y() const {
    return GetField<float>(VT_Y, 0.0f);
  }
  float radius() const {
    return GetField<float>(VT_RADIUS, 0.0f);
  }
  float damage() const {
    return GetField<float>(VT_DAMAGE, 0.0f);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_X, 4) &&
           VerifyField<float>(verifier, VT_Y, 4) &&
           VerifyField<float>(verifier, VT_RADIUS, 4) &&
           VerifyField<float>(verifier, VT_DAMAGE, 4) &&
           verifier.EndTable();
  }
};

struct ExplosionBuilder {
  typedef Explosion Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_x(float x) {
    fbb_.AddElement<float>(Explosion::VT_X, x, 0.0f);
  }
  void add_y(float y) {
    fbb_.AddElement<float>(Explosion::VT_Y, y, 0.0f);
  }
  void add_radius(float radius) {
    fbb_.AddElement<float>(Explosion::VT_RADIUS, radius, 0.0f);
  }
  void add_damage(float damage) {
    fbb_.AddElement<float>(Explosion::VT_DAMAGE, damage, 0.0f);
  }
  explicit ExplosionBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Explosion> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Explosion>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Explosion> CreateExplosion(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    float x = 0.0f,
    float y = 0.0f,
    float radius = 0.0f,
    float damage = 0.0f) {
  ExplosionBuilder builder_(_fbb);
  builder_.add_damage(damage);
  builder_.add_radius(radius);
  builder_.add_y(y);
  builder_.add_x(x);
  return builder_.Finish();
}

struct Entity FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef EntityBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_MY = 6,
    VT_IS_COMMANDABLE = 8,
    VT_POSITION = 10,
    VT_LINEAR_VELOCITY = 12,
    VT_OWNER = 14,
    VT_ROTATION = 16,
    VT_ANGULAR_VELOCITY = 18,
    VT_BLOCKS = 20
  };
  uint64_t id() const {
    return GetField<uint64_t>(VT_ID, 0);
  }
  bool my() const {
    return GetField<uint8_t>(VT_MY, 0) != 0;
  }
  bool is_commandable() const {
    return GetField<uint8_t>(VT_IS_COMMANDABLE, 0) != 0;
  }
  const Vec2 *position() const {
    return GetPointer<const Vec2 *>(VT_POSITION);
  }
  const Vec2 *linear_velocity() const {
    return GetPointer<const Vec2 *>(VT_LINEAR_VELOCITY);
  }
  uint8_t owner() const {
    return GetField<uint8_t>(VT_OWNER, 0);
  }
  float rotation() const {
    return GetField<float>(VT_ROTATION, 0.0f);
  }
  float angular_velocity() const {
    return GetField<float>(VT_ANGULAR_VELOCITY, 0.0f);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<Block>> *blocks() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<Block>> *>(VT_BLOCKS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_ID, 8) &&
           VerifyField<uint8_t>(verifier, VT_MY, 1) &&
           VerifyField<uint8_t>(verifier, VT_IS_COMMANDABLE, 1) &&
           VerifyOffset(verifier, VT_POSITION) &&
           verifier.VerifyTable(position()) &&
           VerifyOffset(verifier, VT_LINEAR_VELOCITY) &&
           verifier.VerifyTable(linear_velocity()) &&
           VerifyField<uint8_t>(verifier, VT_OWNER, 1) &&
           VerifyField<float>(verifier, VT_ROTATION, 4) &&
           VerifyField<float>(verifier, VT_ANGULAR_VELOCITY, 4) &&
           VerifyOffset(verifier, VT_BLOCKS) &&
           verifier.VerifyVector(blocks()) &&
           verifier.VerifyVectorOfTables(blocks()) &&
           verifier.EndTable();
  }
};

struct EntityBuilder {
  typedef Entity Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_id(uint64_t id) {
    fbb_.AddElement<uint64_t>(Entity::VT_ID, id, 0);
  }
  void add_my(bool my) {
    fbb_.AddElement<uint8_t>(Entity::VT_MY, static_cast<uint8_t>(my), 0);
  }
  void add_is_commandable(bool is_commandable) {
    fbb_.AddElement<uint8_t>(Entity::VT_IS_COMMANDABLE, static_cast<uint8_t>(is_commandable), 0);
  }
  void add_position(::flatbuffers::Offset<Vec2> position) {
    fbb_.AddOffset(Entity::VT_POSITION, position);
  }
  void add_linear_velocity(::flatbuffers::Offset<Vec2> linear_velocity) {
    fbb_.AddOffset(Entity::VT_LINEAR_VELOCITY, linear_velocity);
  }
  void add_owner(uint8_t owner) {
    fbb_.AddElement<uint8_t>(Entity::VT_OWNER, owner, 0);
  }
  void add_rotation(float rotation) {
    fbb_.AddElement<float>(Entity::VT_ROTATION, rotation, 0.0f);
  }
  void add_angular_velocity(float angular_velocity) {
    fbb_.AddElement<float>(Entity::VT_ANGULAR_VELOCITY, angular_velocity, 0.0f);
  }
  void add_blocks(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Block>>> blocks) {
    fbb_.AddOffset(Entity::VT_BLOCKS, blocks);
  }
  explicit EntityBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Entity> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Entity>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Entity> CreateEntity(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t id = 0,
    bool my = false,
    bool is_commandable = false,
    ::flatbuffers::Offset<Vec2> position = 0,
    ::flatbuffers::Offset<Vec2> linear_velocity = 0,
    uint8_t owner = 0,
    float rotation = 0.0f,
    float angular_velocity = 0.0f,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Block>>> blocks = 0) {
  EntityBuilder builder_(_fbb);
  builder_.add_id(id);
  builder_.add_blocks(blocks);
  builder_.add_angular_velocity(angular_velocity);
  builder_.add_rotation(rotation);
  builder_.add_linear_velocity(linear_velocity);
  builder_.add_position(position);
  builder_.add_owner(owner);
  builder_.add_is_commandable(is_commandable);
  builder_.add_my(my);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<Entity> CreateEntityDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t id = 0,
    bool my = false,
    bool is_commandable = false,
    ::flatbuffers::Offset<Vec2> position = 0,
    ::flatbuffers::Offset<Vec2> linear_velocity = 0,
    uint8_t owner = 0,
    float rotation = 0.0f,
    float angular_velocity = 0.0f,
    const std::vector<::flatbuffers::Offset<Block>> *blocks = nullptr) {
  auto blocks__ = blocks ? _fbb.CreateVector<::flatbuffers::Offset<Block>>(*blocks) : 0;
  return CreateEntity(
      _fbb,
      id,
      my,
      is_commandable,
      position,
      linear_velocity,
      owner,
      rotation,
      angular_velocity,
      blocks__);
}

struct Projectile FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ProjectileBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MY = 4,
    VT_POSITION = 6,
    VT_LINEAR_VELOCITY = 8,
    VT_SIZE = 10,
    VT_DAMAGE = 12
  };
  bool my() const {
    return GetField<uint8_t>(VT_MY, 0) != 0;
  }
  const Vec2 *position() const {
    return GetPointer<const Vec2 *>(VT_POSITION);
  }
  const Vec2 *linear_velocity() const {
    return GetPointer<const Vec2 *>(VT_LINEAR_VELOCITY);
  }
  float size() const {
    return GetField<float>(VT_SIZE, 0.0f);
  }
  float damage() const {
    return GetField<float>(VT_DAMAGE, 0.0f);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_MY, 1) &&
           VerifyOffset(verifier, VT_POSITION) &&
           verifier.VerifyTable(position()) &&
           VerifyOffset(verifier, VT_LINEAR_VELOCITY) &&
           verifier.VerifyTable(linear_velocity()) &&
           VerifyField<float>(verifier, VT_SIZE, 4) &&
           VerifyField<float>(verifier, VT_DAMAGE, 4) &&
           verifier.EndTable();
  }
};

struct ProjectileBuilder {
  typedef Projectile Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_my(bool my) {
    fbb_.AddElement<uint8_t>(Projectile::VT_MY, static_cast<uint8_t>(my), 0);
  }
  void add_position(::flatbuffers::Offset<Vec2> position) {
    fbb_.AddOffset(Projectile::VT_POSITION, position);
  }
  void add_linear_velocity(::flatbuffers::Offset<Vec2> linear_velocity) {
    fbb_.AddOffset(Projectile::VT_LINEAR_VELOCITY, linear_velocity);
  }
  void add_size(float size) {
    fbb_.AddElement<float>(Projectile::VT_SIZE, size, 0.0f);
  }
  void add_damage(float damage) {
    fbb_.AddElement<float>(Projectile::VT_DAMAGE, damage, 0.0f);
  }
  explicit ProjectileBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Projectile> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Projectile>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Projectile> CreateProjectile(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    bool my = false,
    ::flatbuffers::Offset<Vec2> position = 0,
    ::flatbuffers::Offset<Vec2> linear_velocity = 0,
    float size = 0.0f,
    float damage = 0.0f) {
  ProjectileBuilder builder_(_fbb);
  builder_.add_damage(damage);
  builder_.add_size(size);
  builder_.add_linear_velocity(linear_velocity);
  builder_.add_position(position);
  builder_.add_my(my);
  return builder_.Finish();
}

struct Flag FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef FlagBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_OWNER_ID = 4,
    VT_X = 6,
    VT_Y = 8,
    VT_CARRIER_ID = 10
  };
  uint8_t owner_id() const {
    return GetField<uint8_t>(VT_OWNER_ID, 0);
  }
  float x() const {
    return GetField<float>(VT_X, 0.0f);
  }
  float y() const {
    return GetField<float>(VT_Y, 0.0f);
  }
  uint64_t carrier_id() const {
    return GetField<uint64_t>(VT_CARRIER_ID, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_OWNER_ID, 1) &&
           VerifyField<float>(verifier, VT_X, 4) &&
           VerifyField<float>(verifier, VT_Y, 4) &&
           VerifyField<uint64_t>(verifier, VT_CARRIER_ID, 8) &&
           verifier.EndTable();
  }
};

struct FlagBuilder {
  typedef Flag Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_owner_id(uint8_t owner_id) {
    fbb_.AddElement<uint8_t>(Flag::VT_OWNER_ID, owner_id, 0);
  }
  void add_x(float x) {
    fbb_.AddElement<float>(Flag::VT_X, x, 0.0f);
  }
  void add_y(float y) {
    fbb_.AddElement<float>(Flag::VT_Y, y, 0.0f);
  }
  void add_carrier_id(uint64_t carrier_id) {
    fbb_.AddElement<uint64_t>(Flag::VT_CARRIER_ID, carrier_id, 0);
  }
  explicit FlagBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Flag> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Flag>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Flag> CreateFlag(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint8_t owner_id = 0,
    float x = 0.0f,
    float y = 0.0f,
    uint64_t carrier_id = 0) {
  FlagBuilder builder_(_fbb);
  builder_.add_carrier_id(carrier_id);
  builder_.add_y(y);
  builder_.add_x(x);
  builder_.add_owner_id(owner_id);
  return builder_.Finish();
}

struct GameState FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef GameStateBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FLAGS = 4,
    VT_ENTITIES = 6,
    VT_PROJECTILES = 8,
    VT_EXPLOSIONS = 10,
    VT_MY_ID = 12,
    VT_WINNER_ID = 14
  };
  const ::flatbuffers::Vector<::flatbuffers::Offset<Flag>> *flags() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<Flag>> *>(VT_FLAGS);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<Entity>> *entities() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<Entity>> *>(VT_ENTITIES);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<Projectile>> *projectiles() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<Projectile>> *>(VT_PROJECTILES);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<Explosion>> *explosions() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<Explosion>> *>(VT_EXPLOSIONS);
  }
  uint8_t my_id() const {
    return GetField<uint8_t>(VT_MY_ID, 0);
  }
  uint8_t winner_id() const {
    return GetField<uint8_t>(VT_WINNER_ID, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_FLAGS) &&
           verifier.VerifyVector(flags()) &&
           verifier.VerifyVectorOfTables(flags()) &&
           VerifyOffset(verifier, VT_ENTITIES) &&
           verifier.VerifyVector(entities()) &&
           verifier.VerifyVectorOfTables(entities()) &&
           VerifyOffset(verifier, VT_PROJECTILES) &&
           verifier.VerifyVector(projectiles()) &&
           verifier.VerifyVectorOfTables(projectiles()) &&
           VerifyOffset(verifier, VT_EXPLOSIONS) &&
           verifier.VerifyVector(explosions()) &&
           verifier.VerifyVectorOfTables(explosions()) &&
           VerifyField<uint8_t>(verifier, VT_MY_ID, 1) &&
           VerifyField<uint8_t>(verifier, VT_WINNER_ID, 1) &&
           verifier.EndTable();
  }
};

struct GameStateBuilder {
  typedef GameState Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_flags(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Flag>>> flags) {
    fbb_.AddOffset(GameState::VT_FLAGS, flags);
  }
  void add_entities(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Entity>>> entities) {
    fbb_.AddOffset(GameState::VT_ENTITIES, entities);
  }
  void add_projectiles(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Projectile>>> projectiles) {
    fbb_.AddOffset(GameState::VT_PROJECTILES, projectiles);
  }
  void add_explosions(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Explosion>>> explosions) {
    fbb_.AddOffset(GameState::VT_EXPLOSIONS, explosions);
  }
  void add_my_id(uint8_t my_id) {
    fbb_.AddElement<uint8_t>(GameState::VT_MY_ID, my_id, 0);
  }
  void add_winner_id(uint8_t winner_id) {
    fbb_.AddElement<uint8_t>(GameState::VT_WINNER_ID, winner_id, 0);
  }
  explicit GameStateBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<GameState> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<GameState>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<GameState> CreateGameState(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Flag>>> flags = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Entity>>> entities = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Projectile>>> projectiles = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Explosion>>> explosions = 0,
    uint8_t my_id = 0,
    uint8_t winner_id = 0) {
  GameStateBuilder builder_(_fbb);
  builder_.add_explosions(explosions);
  builder_.add_projectiles(projectiles);
  builder_.add_entities(entities);
  builder_.add_flags(flags);
  builder_.add_winner_id(winner_id);
  builder_.add_my_id(my_id);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<GameState> CreateGameStateDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<::flatbuffers::Offset<Flag>> *flags = nullptr,
    const std::vector<::flatbuffers::Offset<Entity>> *entities = nullptr,
    const std::vector<::flatbuffers::Offset<Projectile>> *projectiles = nullptr,
    const std::vector<::flatbuffers::Offset<Explosion>> *explosions = nullptr,
    uint8_t my_id = 0,
    uint8_t winner_id = 0) {
  auto flags__ = flags ? _fbb.CreateVector<::flatbuffers::Offset<Flag>>(*flags) : 0;
  auto entities__ = entities ? _fbb.CreateVector<::flatbuffers::Offset<Entity>>(*entities) : 0;
  auto projectiles__ = projectiles ? _fbb.CreateVector<::flatbuffers::Offset<Projectile>>(*projectiles) : 0;
  auto explosions__ = explosions ? _fbb.CreateVector<::flatbuffers::Offset<Explosion>>(*explosions) : 0;
  return CreateGameState(
      _fbb,
      flags__,
      entities__,
      projectiles__,
      explosions__,
      my_id,
      winner_id);
}

inline const GameState *GetGameState(const void *buf) {
  return ::flatbuffers::GetRoot<GameState>(buf);
}

inline const GameState *GetSizePrefixedGameState(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<GameState>(buf);
}

inline bool VerifyGameStateBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<GameState>(nullptr);
}

inline bool VerifySizePrefixedGameStateBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<GameState>(nullptr);
}

inline void FinishGameStateBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<GameState> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedGameStateBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<GameState> root) {
  fbb.FinishSizePrefixed(root);
}

#endif  // FLATBUFFERS_GENERATED_GAMESTATE_H_
