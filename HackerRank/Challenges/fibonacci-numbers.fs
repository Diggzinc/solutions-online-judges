open System

[<EntryPoint>]
let main argv = 
    let read _ = Console.ReadLine()
    let v = read() |> int

    let rec f n = 
        match n with
        | 1 -> 0
        | 2 -> 1
        | _ -> f(n-1) + f(n-2)

    printfn "%A" (f v)
    0 // return an integer exit code
