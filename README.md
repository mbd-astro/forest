# forest

<p align="center">
  <a href="https://github.com/bluescarni/heyoka">
    <img src="doc/images/white_logo.png" alt="Logo" width="280">
  </a>
  <p align="center">
    <b>FOREST</b>: the <b>F</b>ast <b>OR</b>bit <b>E</b>nvironment <b>S</b>imulation <b>T</b>oolkit
    <br />
    <!---
    <a href="https://mbd-forest.readthedocs.io/en/latest/"><strong>Explore the docs »</strong></a>
    -->
    <br />
    <br />
    <a href="https://github.com/mbd-astro/forest/wiki">Developer Wiki</a>
    ·
    <a href="https://github.com/mbd-astro/forest/issues">Issues</a>
    ·
    <a href="https://github.com/mbd-astro/forest/discussions">Discussions</a>
  </p>
</p>


Orbit propagation is a frequent computational bottleneck in asytrodynamics problems - forest seeks to alleviate this burden by providing a fast and simple alternative to frequently used solvers like Python's `scipy.integrate.solve_ivp` or Matlab's `ode45/ode113`. Forest leverages a fast C++ backend to enable rapid numerical integration with seamless Python and Matlab support. 