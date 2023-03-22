import "./App.css";
import Navbar from "./Components/Navbar";
import TextForm from "./Components/TextForm";
// import About from './Components/About';
import React, { useState } from "react";

function App() {
  const [mode, setmode] = useState("light");
  const ToggleButton = () => {
    if (mode === "light") {
      setmode("dark");
      document.body.style.backgroundColor = "#042743";
    } 
    else{
      setmode("light");
      document.body.style.backgroundColor = "white";
    }
  };

  return (
    //This will help organise codes in a clean way
    <>
      <Navbar
        Title="TextUtils"
        aboutText="About us"
        mode={mode}
        ToggleButton={ToggleButton}
      />
      <div className="container my-3">
        <TextForm heading="Enter the text to analyze below" mode={mode} />
      </div>
      {/* { <div className="container"> <About/></div>} */}
    </>
  );
}

export default App;
