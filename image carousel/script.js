const slides = document.querySelectorAll('.slide');
const nextBtn = document.getElementById('next');
const prevBtn = document.getElementById('prev');
let current = 0;

function showNext() {
  slides[current].classList.remove('active');
  current = (current + 1) % slides.length;
  slides[current].classList.add('active');
}

function showPrev() {
  slides[current].classList.remove('active');
  current = (current - 1 + slides.length) % slides.length;
  slides[current].classList.add('active');
}

nextBtn.addEventListener('click', showNext);
prevBtn.addEventListener('click', showPrev);

setInterval(showNext, 5000);
