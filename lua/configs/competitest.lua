require("competitest").setup {
  runner_ui = {
    interface = "split",
  },
  compile_command = {
    cpp = { exec = "g++", args = { "$(FNAME)", "-std=c++17", "-O2", "-g", "-Wall", "-o", "$(FNOEXT)" } },
    some_lang = { exec = "some_compiler", args = { "$(FNAME)" } },
  },
  run_command = {
    cpp = { exec = "./$(FNOEXT)" },
    some_lang = { exec = "some_interpreter", args = { "$(FNAME)" } },
  },
}
