#ifndef GAME_STATE_READER_H
#define GAME_STATE_READER_H

/* Generated by flatcc 0.6.2 FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
#endif
#include "flatcc/flatcc_flatbuffers.h"
#ifndef __alignas_is_defined
#include <stdalign.h>
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension "bin"
#endif


typedef const struct Vec2_table *Vec2_table_t;
typedef struct Vec2_table *Vec2_mutable_table_t;
typedef const flatbuffers_uoffset_t *Vec2_vec_t;
typedef flatbuffers_uoffset_t *Vec2_mutable_vec_t;
typedef const struct MissileSlot_table *MissileSlot_table_t;
typedef struct MissileSlot_table *MissileSlot_mutable_table_t;
typedef const flatbuffers_uoffset_t *MissileSlot_vec_t;
typedef flatbuffers_uoffset_t *MissileSlot_mutable_vec_t;
typedef const struct Shield_table *Shield_table_t;
typedef struct Shield_table *Shield_mutable_table_t;
typedef const flatbuffers_uoffset_t *Shield_vec_t;
typedef flatbuffers_uoffset_t *Shield_mutable_vec_t;
typedef const struct Block_table *Block_table_t;
typedef struct Block_table *Block_mutable_table_t;
typedef const flatbuffers_uoffset_t *Block_vec_t;
typedef flatbuffers_uoffset_t *Block_mutable_vec_t;
typedef const struct Projectile_table *Projectile_table_t;
typedef struct Projectile_table *Projectile_mutable_table_t;
typedef const flatbuffers_uoffset_t *Projectile_vec_t;
typedef flatbuffers_uoffset_t *Projectile_mutable_vec_t;
typedef const struct Explosion_table *Explosion_table_t;
typedef struct Explosion_table *Explosion_mutable_table_t;
typedef const flatbuffers_uoffset_t *Explosion_vec_t;
typedef flatbuffers_uoffset_t *Explosion_mutable_vec_t;
typedef const struct Entity_table *Entity_table_t;
typedef struct Entity_table *Entity_mutable_table_t;
typedef const flatbuffers_uoffset_t *Entity_vec_t;
typedef flatbuffers_uoffset_t *Entity_mutable_vec_t;
typedef const struct GameState_table *GameState_table_t;
typedef struct GameState_table *GameState_mutable_table_t;
typedef const flatbuffers_uoffset_t *GameState_vec_t;
typedef flatbuffers_uoffset_t *GameState_mutable_vec_t;
#ifndef Vec2_file_identifier
#define Vec2_file_identifier 0
#endif
/* deprecated, use Vec2_file_identifier */
#ifndef Vec2_identifier
#define Vec2_identifier 0
#endif
#define Vec2_type_hash ((flatbuffers_thash_t)0x2c3c5815)
#define Vec2_type_identifier "\x15\x58\x3c\x2c"
#ifndef Vec2_file_extension
#define Vec2_file_extension "bin"
#endif
#ifndef MissileSlot_file_identifier
#define MissileSlot_file_identifier 0
#endif
/* deprecated, use MissileSlot_file_identifier */
#ifndef MissileSlot_identifier
#define MissileSlot_identifier 0
#endif
#define MissileSlot_type_hash ((flatbuffers_thash_t)0x4610caaf)
#define MissileSlot_type_identifier "\xaf\xca\x10\x46"
#ifndef MissileSlot_file_extension
#define MissileSlot_file_extension "bin"
#endif
#ifndef Shield_file_identifier
#define Shield_file_identifier 0
#endif
/* deprecated, use Shield_file_identifier */
#ifndef Shield_identifier
#define Shield_identifier 0
#endif
#define Shield_type_hash ((flatbuffers_thash_t)0x798a26d0)
#define Shield_type_identifier "\xd0\x26\x8a\x79"
#ifndef Shield_file_extension
#define Shield_file_extension "bin"
#endif
#ifndef Block_file_identifier
#define Block_file_identifier 0
#endif
/* deprecated, use Block_file_identifier */
#ifndef Block_identifier
#define Block_identifier 0
#endif
#define Block_type_hash ((flatbuffers_thash_t)0xbd074002)
#define Block_type_identifier "\x02\x40\x07\xbd"
#ifndef Block_file_extension
#define Block_file_extension "bin"
#endif
#ifndef Projectile_file_identifier
#define Projectile_file_identifier 0
#endif
/* deprecated, use Projectile_file_identifier */
#ifndef Projectile_identifier
#define Projectile_identifier 0
#endif
#define Projectile_type_hash ((flatbuffers_thash_t)0x713f51ba)
#define Projectile_type_identifier "\xba\x51\x3f\x71"
#ifndef Projectile_file_extension
#define Projectile_file_extension "bin"
#endif
#ifndef Explosion_file_identifier
#define Explosion_file_identifier 0
#endif
/* deprecated, use Explosion_file_identifier */
#ifndef Explosion_identifier
#define Explosion_identifier 0
#endif
#define Explosion_type_hash ((flatbuffers_thash_t)0x88a79680)
#define Explosion_type_identifier "\x80\x96\xa7\x88"
#ifndef Explosion_file_extension
#define Explosion_file_extension "bin"
#endif
#ifndef Entity_file_identifier
#define Entity_file_identifier 0
#endif
/* deprecated, use Entity_file_identifier */
#ifndef Entity_identifier
#define Entity_identifier 0
#endif
#define Entity_type_hash ((flatbuffers_thash_t)0xc09b32fa)
#define Entity_type_identifier "\xfa\x32\x9b\xc0"
#ifndef Entity_file_extension
#define Entity_file_extension "bin"
#endif
#ifndef GameState_file_identifier
#define GameState_file_identifier 0
#endif
/* deprecated, use GameState_file_identifier */
#ifndef GameState_identifier
#define GameState_identifier 0
#endif
#define GameState_type_hash ((flatbuffers_thash_t)0x392e5808)
#define GameState_type_identifier "\x08\x58\x2e\x39"
#ifndef GameState_file_extension
#define GameState_file_extension "bin"
#endif



struct Vec2_table { uint8_t unused__; };

static inline size_t Vec2_vec_len(Vec2_vec_t vec)
__flatbuffers_vec_len(vec)
static inline Vec2_table_t Vec2_vec_at(Vec2_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(Vec2_table_t, vec, i, 0)
__flatbuffers_table_as_root(Vec2)

__flatbuffers_define_scalar_field(0, Vec2, x, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(1, Vec2, y, flatbuffers_float, float, 0.00000000f)

struct MissileSlot_table { uint8_t unused__; };

static inline size_t MissileSlot_vec_len(MissileSlot_vec_t vec)
__flatbuffers_vec_len(vec)
static inline MissileSlot_table_t MissileSlot_vec_at(MissileSlot_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(MissileSlot_table_t, vec, i, 0)
__flatbuffers_table_as_root(MissileSlot)

__flatbuffers_define_scalar_field(0, MissileSlot, is_loaded, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_scalar_field(1, MissileSlot, reload_timer, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(2, MissileSlot, x, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(3, MissileSlot, y, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(4, MissileSlot, rotation, flatbuffers_float, float, 0.00000000f)

struct Shield_table { uint8_t unused__; };

static inline size_t Shield_vec_len(Shield_vec_t vec)
__flatbuffers_vec_len(vec)
static inline Shield_table_t Shield_vec_at(Shield_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(Shield_table_t, vec, i, 0)
__flatbuffers_table_as_root(Shield)

__flatbuffers_define_scalar_field(0, Shield, is_destroyed, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_scalar_field(1, Shield, hitpoints, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(2, Shield, radius, flatbuffers_float, float, 0.00000000f)

struct Block_table { uint8_t unused__; };

static inline size_t Block_vec_len(Block_vec_t vec)
__flatbuffers_vec_len(vec)
static inline Block_table_t Block_vec_at(Block_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(Block_table_t, vec, i, 0)
__flatbuffers_table_as_root(Block)

__flatbuffers_define_scalar_field(0, Block, block_type, flatbuffers_uint32, uint32_t, UINT32_C(0))
__flatbuffers_define_scalar_field(1, Block, feature_flags, flatbuffers_uint64, uint64_t, UINT64_C(0))
__flatbuffers_define_scalar_field(2, Block, x, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(3, Block, y, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(4, Block, rotation, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(5, Block, hitpoints, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(6, Block, applied_thrust, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(7, Block, is_destroyed, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_vector_field(8, Block, missile_slots, MissileSlot_vec_t, 0)
__flatbuffers_define_scalar_field(9, Block, local_turret_rotation, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_table_field(10, Block, shield, Shield_table_t, 0)

struct Projectile_table { uint8_t unused__; };

static inline size_t Projectile_vec_len(Projectile_vec_t vec)
__flatbuffers_vec_len(vec)
static inline Projectile_table_t Projectile_vec_at(Projectile_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(Projectile_table_t, vec, i, 0)
__flatbuffers_table_as_root(Projectile)

__flatbuffers_define_scalar_field(0, Projectile, size, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(1, Projectile, damage, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(2, Projectile, block_config_id, flatbuffers_uint32, uint32_t, UINT32_C(0))

struct Explosion_table { uint8_t unused__; };

static inline size_t Explosion_vec_len(Explosion_vec_t vec)
__flatbuffers_vec_len(vec)
static inline Explosion_table_t Explosion_vec_at(Explosion_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(Explosion_table_t, vec, i, 0)
__flatbuffers_table_as_root(Explosion)

__flatbuffers_define_scalar_field(0, Explosion, x, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(1, Explosion, y, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(2, Explosion, radius, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(3, Explosion, damage, flatbuffers_float, float, 0.00000000f)

struct Entity_table { uint8_t unused__; };

static inline size_t Entity_vec_len(Entity_vec_t vec)
__flatbuffers_vec_len(vec)
static inline Entity_table_t Entity_vec_at(Entity_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(Entity_table_t, vec, i, 0)
__flatbuffers_table_as_root(Entity)

__flatbuffers_define_scalar_field(0, Entity, id, flatbuffers_uint64, uint64_t, UINT64_C(0))
__flatbuffers_define_scalar_field(1, Entity, my, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_scalar_field(2, Entity, is_commandable, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_scalar_field(3, Entity, entity_type, flatbuffers_int32, int32_t, INT32_C(0))
__flatbuffers_define_table_field(4, Entity, position, Vec2_table_t, 0)
__flatbuffers_define_table_field(5, Entity, linear_velocity, Vec2_table_t, 0)
__flatbuffers_define_scalar_field(6, Entity, owner, flatbuffers_int32, int32_t, INT32_C(0))
__flatbuffers_define_scalar_field(7, Entity, rotation, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(8, Entity, angular_velocity, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_vector_field(9, Entity, blocks, Block_vec_t, 0)
__flatbuffers_define_table_field(10, Entity, projectile, Projectile_table_t, 0)

struct GameState_table { uint8_t unused__; };

static inline size_t GameState_vec_len(GameState_vec_t vec)
__flatbuffers_vec_len(vec)
static inline GameState_table_t GameState_vec_at(GameState_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(GameState_table_t, vec, i, 0)
__flatbuffers_table_as_root(GameState)

__flatbuffers_define_vector_field(0, GameState, entities, Entity_vec_t, 0)
__flatbuffers_define_vector_field(1, GameState, explosions, Explosion_vec_t, 0)
__flatbuffers_define_scalar_field(2, GameState, my_id, flatbuffers_int32, int32_t, INT32_C(0))
__flatbuffers_define_scalar_field(3, GameState, winner_id, flatbuffers_int32, int32_t, INT32_C(0))


#include "flatcc/flatcc_epilogue.h"
#endif /* GAME_STATE_READER_H */
