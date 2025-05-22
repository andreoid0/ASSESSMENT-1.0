<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Shrek Characters Gallery</title>
    <style>
        body {
            text-align: center;
            font-family: Arial, sans-serif;
            background-color: black;
            color: white;
            padding: 20px;
            margin: 0;
            height: 100vh;
            display: flex;
            flex-direction: column;
            align-items: center;
            justify-content: center;
            position: relative;
        }

        .title-box {
            display: inline-block;
            padding: 20px 40px;
            margin-bottom: 30px;
            border: 6px solid #4a3d2f;
            background: linear-gradient(45deg, #00ff00, #4a3d2f);
            color: white;
            font-size: 42px;
            font-weight: bold;
            text-transform: uppercase;
            text-shadow: 0 0 20px #00ff00;
            border-radius: 10px;
            z-index: 2;
            position: relative;
        }

        .gallery {
            display: flex;
            justify-content: center;
            align-items: center;
            flex-wrap: wrap;
            gap: 20px;
            padding: 20px;
            max-width: 90%;
            position: relative;
            z-index: 2;
        }

        .image-container {
            text-align: center;
            width: 320px; /* Larger image */
        }

        img {
            width: 100%;
            height: auto;
            border: 4px solid #00ff00; /* Neon green border */
            border-radius: 15px;
            box-shadow: 0 0 20px rgba(0, 255, 0, 0.6);
            transition: transform 0.3s, filter 0.3s ease;
            cursor: pointer;
        }

        img:hover {
            filter: brightness(130%) contrast(120%) blur(2px);
            transform: scale(1.1);
        }

        .image-container p {
            font-size: 16px;
            color: #ddd;
            margin: 8px 0 0;
        }

        /* Background GIF */
        body::before {
            content: "";
            position: fixed;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            background: url('SHREK.gif') center center/cover no-repeat;
            opacity: 0.3; /* Adjust transparency */
            z-index: -1;
        }
    </style>
</head>
<body>

    <div class="title-box">Shrek</div>

    <div class="gallery">
        <div class="image-container">
            <img src="S.jpg" alt="Shrek smiling">
            <p>[IMAGE SOURCE: GOOGLE]</p>
        </div>

        <div class="image-container">
            <img src="D.jpg" alt="Donkey smiling">
            <p>[IMAGE SOURCE: GOOGLE]</p>
        </div>

        <div class="image-container">
            <img src="L.jpg" alt="Lord Farquaad in his castle">
            <p>[IMAGE SOURCE: GOOGLE]</p>
        </div>
    </div>

</body>
</html>
