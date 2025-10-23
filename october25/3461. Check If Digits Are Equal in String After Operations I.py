class Solution:
    def calcularString( s:str ) -> str:
        output = ""
        for i in range( len( s ) - 1 ):
            output += str( ( int( s[i] ) + int( s[i+1] ) ) % 10 )
        return output
    def hasSameDigits(self, s: str) -> bool:
        while( len( s ) != 2 ):
            s = Solution.calcularString ( s )
        
        if ( s[0] == s[1] ): return True
        return False