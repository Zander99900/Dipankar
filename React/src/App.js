import './App.css';
import Navbar from './Components/Navbar';
// import TextForm from './Components/TextForm';
import About from './Components/About';

function App() {
  return (
    //This will help organise codes in a clean way
    <>
      <Navbar Title = 'TextUtils' aboutText = 'About us'/>
      {/* { <div className="container"><TextForm heading = "Text Conversion Website"/></div>} */}
      { <div className="container"> <About/></div>}

    </>
  );
}

export default App;
