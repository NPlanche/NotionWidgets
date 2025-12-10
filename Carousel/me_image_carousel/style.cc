* {
  box-sizing: border-box;
  margin: 0;
  padding: 0;
}

body {
  font-family: sans-serif;
  background: #222;
  color: #fff;
  overflow: hidden;
}

.slider {
  position: relative;
  width: 100vw;
  height: 100vh;
  overflow: hidden;
}

.slide {
  position: absolute;
  width: 100%;
  height: 100%;
  background-size: cover;
  background-position: center;
  opacity: 0;
  transition: opacity 0.5s ease-in-out;
}

.slide.active {
  opacity: 1;
}

.controls {
  position: absolute;
  top: 50%;
  width: 100%;
  display: flex;
  justify-content: space-between;
  transform: translateY(-50%);
}

.controls button {
  background: rgba(255,255,255,0.3);
  border: none;
  padding: 1rem;
  font-size: 2rem;
  cursor: pointer;
  color: #fff;
}

.controls button:hover {
  background: rgba(255,255,255,0.6);
}
