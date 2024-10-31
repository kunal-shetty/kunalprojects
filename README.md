<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>GitHub Profile</title>
    <style>
        body {
            font-family: 'Inter', sans-serif;
            background-color: #2c3e50;
            color: #ecf0f1;
            display: flex;
            flex-direction: column;
            align-items: center;
            padding: 20px;
            margin: 0;
        }
        h1 {
            font-size: 3em;
            margin: 0.5em 0;
            text-transform: uppercase;
            animation: fadeIn 2s ease-in-out;
        }
        h2 {
            color: #3498db;
            animation: slideIn 2s ease-in-out;
        }
        @keyframes slideIn {
            0% { transform: translateY(-50px); opacity: 0; }
            100% { transform: translateY(0); opacity: 1; }
        }
        @keyframes fadeIn {
            from { opacity: 0; }
            to { opacity: 1; }
        }
        .social-icons {
            list-style: none;
            padding: 0;
            display: flex;
            gap: 15px;
            margin-top: 1em;
        }
        .social-icons li {
            display: inline;
        }
        .social-icons a {
            font-size: 1.5em;
            color: #ecf0f1;
            transition: color 0.3s;
        }
        .social-icons a:hover {
            color: #3498db;
        }
        .skills {
            margin-top: 1em;
            display: flex;
            gap: 10px;
            flex-wrap: wrap;
            max-width: 600px;
            justify-content: center;
        }
        .skill-badge {
            padding: 10px 15px;
            background-color: #3498db;
            border-radius: 25px;
            color: #ecf0f1;
            font-weight: bold;
            font-size: 0.9em;
            animation: slideIn 1.5s ease-in-out;
        }
    </style>
</head>
<body>
    <h1>Welcome to My Profile!</h1>
    <h2>👋 Hello, I'm [Your Name]</h2>
    <p>I'm a developer passionate about creating interactive and beautiful web experiences.</p>

    <ul class="social-icons">
        <li><a href="https://github.com/yourusername" target="_blank">GitHub</a></li>
        <li><a href="https://linkedin.com/in/yourusername" target="_blank">LinkedIn</a></li>
        <li><a href="https://twitter.com/yourusername" target="_blank">Twitter</a></li>
    </ul>

    <div class="skills">
        <span class="skill-badge">HTML</span>
        <span class="skill-badge">CSS</span>
        <span class="skill-badge">JavaScript</span>
        <span class="skill-badge">Python</span>
        <span class="skill-badge">React</span>
    </div>
</body>
</html>
