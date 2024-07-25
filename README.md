# Space Shooter Bots Schema
- contains the flatbuffers schema used for the space shooter bots and pre-generated code for several languages, C, C++, Go, Rust
- the generated code uses flatbuffers version `24.3.25` using other versions may or may not work.

## FlatBuffers 
 - refer to https://github.com/google/flatbuffers/tree/v24.3.25 for fetching the flatbuffer dependencies for your language
 - read the tutorial on using flatbuffers for your language of choice: https://flatbuffers.dev/flatbuffers_guide_tutorial.html

## NOTES
- the generated header file for C++ is not compatible with C
- generated file for Go leaves package name empty. use whatever package name you want

# C++, Go, Rust
- `flatc --cpp -r -g --gen-onefile game_state.fbs`

# C
- For C, you have to use https://github.com/dvidelabs/flatcc. pre-generated files were made with commit `6d21e17e0e3c7b00fb844d737909fabf1e86ea52` as of writing
- `flatcc --reader --common_reader game_state.fbs`

