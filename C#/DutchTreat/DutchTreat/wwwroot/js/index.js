var theForm = $("#theForm");
theForm.hide();

var button = $("#theButton");
button.on("click", function () {
    console.log("Buying Item");
});

var productInfo = $(".product-props li");
productInfo.on("click", function () {
    console.log("clicked one of the items: " + $(this).text());
});

//I can't get the animations to work here to toggle the login button
var $loginToggle = $("#loginToggle");
var $popupForm = $(".popup-form");

$loginToggle.on("click", function () {
    $popupForm.slideToggle(1000); // This is the problem line :-(
});




