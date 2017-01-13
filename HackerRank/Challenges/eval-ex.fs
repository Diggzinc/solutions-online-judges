open System

[<EntryPoint>]
let main argv = 
    let read _ = Console.ReadLine()
    let n = read() |> int

    let factorial n = 
        [1..int(n)] 
        |> List.reduce(*)
        |> double

    let term i x  = x ** i / (factorial i)

    let series x =
        [0..9] 
        |> List.map(double)
        |> List.reduce(fun a i -> a + term i x)
        |> fun v -> v + 1.0

    Seq.initInfinite read 
    |> Seq.takeWhile (String.IsNullOrWhiteSpace >> not) 
    |> Seq.map (fun v -> v |> double |> series)
    |> Seq.iter(printfn "%.4f")
    0 // return an integer exit code
