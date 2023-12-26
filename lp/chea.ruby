def disfrutar_comida_compleja
  puts "Hola, me gusta el pan"

  # Algunas variables
  repeticiones = 3

  # Bucle principal
  1.upto(repeticiones) do |i|
    puts "Iteración #{i}:"

    if i.even?
      puts "Disfrutando de una deliciosa sopa"
    else
      puts "Comiendo una sabrosa pizza"

      # Bucle anidado
      1.upto(2) do |j|
        puts "  Sub-iteración #{j}: Añadiendo ingredientes"
      end
    end

    puts "-----"
  end

  # Array de ingredientes
  ingredientes = ["aceitunas", "queso", "tomate", "albahaca"]

  puts "Ingredientes para la próxima comida:"

  # Bucle para imprimir ingredientes
  ingredientes.each do |ingrediente|
    puts "  - #{ingrediente}"
  end

  puts "Terminando de disfrutar de la comida..."
end

# Llamada a la función
disfrutar_comida_compleja
