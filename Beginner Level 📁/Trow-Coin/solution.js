function lanzarMoneda() {
    const resultado = Math.random() < 0.5 ? "heads" : "tails";
    return resultado;
}

console.log(lanzarMoneda());
