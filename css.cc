*{
margin:0;
padding:0;
box-sizing:border-box;
font-family:Arial, sans-serif;
}

body{
background:#f5f5f5;
}

/* HEADER */

header{
display:flex;
justify-content:space-between;
align-items:center;
padding:20px 5%;
background:#ff69b4;
color:white;
}

nav a{
color:white;
text-decoration:none;
margin-left:20px;
font-weight:bold;
}

/* BANNER */

.section-1{
display:flex;
justify-content:center;
margin:20px;
}

.section-1 img{
width:20%;
max-width:150px;
height:150px;
object-fit:cover;
border-radius:15px;
}

/* JUDUL */

.p-rekomendasi{
text-align:center;
margin:30px;
font-size:2rem;
}

/* PRODUK */

.produk-container{
display:grid;
grid-template-columns:repeat(auto-fit,minmax(220px,1fr));
gap:20px;
padding:20px 5%;
}

.card{
background:white;
padding:15px;
border-radius:10px;
text-align:center;
box-shadow:0 4px 8px rgba(0,0,0,0.1);
}

.card img{
width:100%;
height:180px;
object-fit:cover;
border-radius:10px;
}

.harga{
color:#ff1493;
font-weight:bold;
margin:10px 0;
}

button{
background:#ff69b4;
color:white;
border:none;
padding:10px 15px;
border-radius:5px;
cursor:pointer;
}

button:hover{
background:#ff1493;
}

/* FOOTER */

footer{
text-align:center;
padding:20px;
margin-top:40px;
background:#333;
color:white;
}
