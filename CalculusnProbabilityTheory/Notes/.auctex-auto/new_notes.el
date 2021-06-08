(TeX-add-style-hook
 "new_notes"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-class-options
                     '(("article" "10pt" "a4paper")))
   (TeX-run-style-hooks
    "latex2e"
    "article"
    "art10"
    "amsmath"
    "amssymb"
    "amsthm")
   (TeX-add-symbols
    '("abs" 1))
   (LaTeX-add-amsthm-newtheorems
    "definition"))
 :latex)

