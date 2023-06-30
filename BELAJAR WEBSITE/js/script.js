//toogle class active

const navbarNav = document.querySelector(".navbar-nav");

//ketika hamburger menu dilcick

document.querySelector("#hamburger-menu").onclick = () => {
  navbarNav.classList.toggle("active");
};
