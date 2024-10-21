workspace(name = "ninja_ob1_games_elemental-programming")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")


########################
# (BAZEL) rules_pkg:
git_repository(
    name = "rules_pkg",
    remote = "https://github.com/bazelbuild/rules_pkg/",
    commit = "29d79cfa6def995cc702d82d6e9dd5d01fcd5065", # v0.8.0
    shallow_since = "1667445879 -0400"
)

load("@rules_pkg//pkg:deps.bzl", "rules_pkg_dependencies")

rules_pkg_dependencies()

########################
# Hedron's Compile Commands Extractor for Bazel
# https://github.com/hedronvision/bazel-compile-commands-extractor
http_archive(
    name = "hedron_compile_commands",
    url = "https://github.com/hedronvision/bazel-compile-commands-extractor/archive/1e08f8e0507b6b6b1f4416a9a22cf5c28beaba93.tar.gz",
    strip_prefix = "bazel-compile-commands-extractor-1e08f8e0507b6b6b1f4416a9a22cf5c28beaba93",
    sha256 = "044b148b111e17cee61d8c3aaeed42069f7325460382340afca4919f8265094c",
)
load("@hedron_compile_commands//:workspace_setup.bzl", "hedron_compile_commands_setup")
hedron_compile_commands_setup()
load("@hedron_compile_commands//:workspace_setup_transitive.bzl", "hedron_compile_commands_setup_transitive")
hedron_compile_commands_setup_transitive()
load("@hedron_compile_commands//:workspace_setup_transitive_transitive.bzl", "hedron_compile_commands_setup_transitive_transitive")
hedron_compile_commands_setup_transitive_transitive()
load("@hedron_compile_commands//:workspace_setup_transitive_transitive_transitive.bzl", "hedron_compile_commands_setup_transitive_transitive_transitive")
hedron_compile_commands_setup_transitive_transitive_transitive()
