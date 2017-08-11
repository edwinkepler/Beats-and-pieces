using System;
using System.Collections.Generic;

public class DNA
{
    private string s_dna;
    public DNA(string sequence)
    {
        s_dna = sequence;
    }

    public Dictionary<char, int> NucleotideCounts
    {
        get
        {
            Dictionary<char, int> result = new Dictionary<char, int>();
            result['A'] = Count('A');
            result['C'] = Count('C');
            result['G'] = Count('G');
            result['T'] = Count('T');
            return result;
        }
    }

    public int Count(char nucleotide)
    {
        if(nucleotide != 'A' && nucleotide != 'C' && nucleotide != 'G' && nucleotide != 'T')
        {
            throw new InvalidNucleotideException();
        }
        else
        {
            int result = 0;
            foreach(char c in s_dna)
            {
                if(c == nucleotide)
                {
                    result++;
                }
            }
            return result;
        }
    }
}

public class InvalidNucleotideException : Exception { }
