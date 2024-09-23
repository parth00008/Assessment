//  get cookies by name
function getCookie(name) {
    const value = `; ${document.cookie}`;
    const parts = value.split(`; ${name}=`);
    if (parts.length === 2) return parts.pop().split(';').shift();
}

// Function to set a cookie
function setCookie(name, value, days) {
    const date = new Date();
    date.setTime(date.getTime() + (days * 24 * 60 * 60 * 1000));
    const expires = "expires=" + date.toUTCString();
    document.cookie = `${name}=${value}; ${expires}; path=/`;
}

// Function to load todos from cookies
function loadTodos() {
    const todos = getCookie('todos');
    if (todos) {
        const todoArray = todos.split(',');
        todoArray.forEach(todo => {
            addTodoToList(todo);
        });
    }
}

// Function to add a todo item to the list
function addTodoToList(todo) {
    const todoList = document.getElementById('todoList');
    const listItem = document.createElement('li');
    listItem.textContent = todo;
    todoList.appendChild(listItem);
}

// Event listener for the button click
document.getElementById('addButton').addEventListener('click', function() {
    const todoInput = document.getElementById('todoInput');
    const newTodo = todoInput.value.trim();

    // Check if the input is not empty
    if (newTodo) {
        addTodoToList(newTodo);

        // Store the todo in the cookie
        const existingTodos = getCookie('todos');
        const todosArray = existingTodos ? existingTodos.split(',') : [];
        todosArray.push(newTodo);
        setCookie('todos', todosArray.join(','), 10); // Cookie expires in 7 days

        // Clear the input field after adding
        todoInput.value = '';
    } else {
        alert('Please enter a todo item.');
    }
});

// Load todos when the page is loaded
window.onload = loadTodos;
