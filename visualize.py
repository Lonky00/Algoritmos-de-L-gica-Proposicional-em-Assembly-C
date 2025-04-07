import matplotlib.pyplot as plt
import numpy as np

dados = np.array([
    [0, 0, 1, 1],
    [0, 1, 1, 1],
    [1, 0, 0, 0],
    [1, 1, 1, 1]
])

plt.imshow(dados[:, 2:], cmap='RdYlGn')
plt.xticks([0, 1], ["p→q", "(p∧¬q)→F"])
plt.yticks(range(4), ["p=0,q=0", "p=0,q=1", "p=1,q=0", "p=1,q=1"])
plt.colorbar(label="Verdadeiro (1) / Falso (0)")
plt.title("Equivalência (a): p→q ⇔ (p∧¬q)→F")
plt.show()