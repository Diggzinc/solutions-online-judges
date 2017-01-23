open System
open System.Linq

[<EntryPoint>]
let main argv = 
    let read _ = Console.ReadLine()

    let explode (s:string) =
        [for c in s -> c]
   
    let str = read() |> explode

    let prt current counter =
        if counter = 1
        then
            printf "%c" current
        else
            printf "%c%d" current counter

    let rec compress current counter list =
        match list with
        | head::tail -> 
            if current = head
            then
                compress head (counter+1) tail
            else
                prt current counter
                compress head 1 tail
        | [] -> prt current counter


    compress str.[0] 0 str 
    |> ignore
    0 // return an integer exit code
