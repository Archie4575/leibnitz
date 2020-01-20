# Leibnitz
A C++ command line tool to estimate Pi using leibnitz's formula.

## What is leibnitz's formula?
Gottfried Wilhelm von Leibnitz was a prominent German polymath, who lived from 1646-1716.
He came up with the following formula for π:

![Leibnitz pattern](https://wikimedia.org/api/rest_v1/media/math/render/svg/fab3e3e4febf987b57159d81fd47995fb0af1240)

or

![Leibnitz sigma](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcRserFpj4mpKY4syeu8Tc4A8GLkN8r0RsApTjV6fUyQMiZwxil8)

This program iterates over this pattern '_k_' times, with '_k_' being defined by the user. The larger the value of '_k_',
the closer the approximation of pi.

## Installation
```
$ git clone https://github.com/Archie4575/leibnitz
$ cd leibnitz
$ make all
```

## Usage
`$ leibnitz <repetitions>`
### Example
```
$ leibnitz 1000
100%
Pi: 3.14059
```

## Update
```
$ git pull origin master
$ make all
```

## Uninstall
`$ make uninstall`
