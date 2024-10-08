# Space Shooter Bots Schema
- contains the flatbuffers schema used for the space shooter bots and pre-generated code for several languages, C, C++, Go, Rust
- the generated code uses flatbuffers version `24.3.25` using other versions may or may not work.

## FlatBuffers 
 - refer to https://github.com/google/flatbuffers/tree/v24.3.25 for fetching the flatbuffer dependencies for your language
 - read the tutorial on using flatbuffers for your language of choice: https://flatbuffers.dev/flatbuffers_guide_tutorial.html
 - C generated code uses https://github.com/dvidelabs/flatcc 
 - Use the Typescript generated code for [Assemblyscript](https://www.assemblyscript.org/)

## NOTES
- the generated header file for C++ is not compatible with C
- generated file for Go leaves package name empty. use whatever package name you want

# Generating
- `flatc --cpp -r -g --gen-onefile game_state.fbs`
- For C, you have to use https://github.com/dvidelabs/flatcc. pre-generated files were made with commit `6d21e17e0e3c7b00fb844d737909fabf1e86ea52` as of writing
- `flatcc --reader --common_reader game_state.fbs`
- or you cn use `./generate.sh` to generate all of them 

# Game State Delta
 - `game_state_delta.fbs` is used for delta encoding the game state. it is meant to report changes to the game state since the last game tick. your bot implementation should first get a full copy of the game state in order to take advantage of the delta game state for subsequent game ticks.