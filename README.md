This demonstrates a bug I keep finding while trying to make a Node native add-on using Nim as the C-code generator.

Requirements:

- Node
- Nim

To see the problem:

```
make clean
npm i --ignore-scripts
make
make test
```

This will delete and regenerate files in `csrc/`, `build/`, `lib/` and `dist/`.  I've committed my versions of `dist/` and `csrc/` to the repo for reference.
