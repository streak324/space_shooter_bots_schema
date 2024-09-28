#!/bin/bash -e
pushd ./generated/go
flatc --go --gen-onefile ../../game_state.fbs
flatc --go --gen-onefile ../../game_state_delta.fbs
popd

pushd ./generated/cpp
flatc --cpp --gen-onefile ../../game_state.fbs
flatc --cpp --gen-onefile ../../game_state_delta.fbs
popd

pushd ./generated/rust
flatc --rust --gen-onefile ../../game_state.fbs
flatc --rust --gen-onefile ../../game_state_delta.fbs
popd

pushd ./generated/c
flatcc --reader --common_reader ../../game_state.fbs
flatcc --reader --common_reader ../../game_state_delta.fbs
popd