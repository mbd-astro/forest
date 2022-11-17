# forest

<p align="center">
  <a href="https://github.com/mbd-astro/forest">
    <img src="docs/images/forest.png" alt="Logo" width="260">
  </a>
  <p align="center">
    <b>FOREST</b>: the <b>F</b>ast <b>OR</b>bit <b>E</b>nvironment <b>S</b>imulation <b>T</b>oolkit
    <!---
    <br />
    <a href="https://mbd-forest.readthedocs.io/en/latest/"><strong>Explore the docs »</strong></a>
    <br />
    -->
    <br />
    <a href="https://github.com/mbd-astro/forest/wiki">Developer Wiki</a>
    ·
    <a href="https://github.com/mbd-astro/forest/issues">Issues</a>
    ·
    <a href="https://github.com/mbd-astro/forest/discussions">Discussions</a>
  </p>
</p>


Orbit propagation is a frequent computational bottleneck in asytrodynamics problems - forest seeks to alleviate this burden by providing a fast and simple alternative to frequently used solvers like Python's `scipy.integrate.solve_ivp` or Matlab's `ode45/ode113`. Forest leverages a fast C++ backend to enable rapid numerical integration with seamless Python and Matlab support.

Forest[^1] is designed to be modular and easily-extendable. Functionality will include:
- Common dynamical models
    - circular restricted three-body problem
    - bicircular restricted four-body problem
    - the Hill problem
    - restricted Hill four-body problem
    - n-body ephemeris model
- Event finding / early stopping
  - Geometric planes
  - Apses
- Low-thrust propulsion


[^1]: Our name pays homage to [Forest Ray Moulton](https://en.wikipedia.org/wiki/Forest_Ray_Moulton)’s dual contributions to both the restricted three-body problem and to numerical integration methods.