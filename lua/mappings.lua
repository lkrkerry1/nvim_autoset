require "nvchad.mappings"

-- add yours here

local map = vim.keymap.set

map("n", ";", ":", { desc = "CMD enter command mode" })
map("i", "jk", "<ESC>")

-- map({ "n", "i", "v" }, "<C-s>", "<cmd> w <cr>")
map("n", "<leader>db", "<cmd> DapToggleBreakpoint <CR>")
map("n", "<leader>dr", "<cmd> DapContinue<CR>")
map("n", "<leader>rr", "<cmd> CompetiTest run <CR>")
map("n", "<leader>trp", "<cmd> CompetiTest receive problem <CR>")
map("n", "<leader>trt", "<cmd> CompetiTest receive testcase <CR>")
