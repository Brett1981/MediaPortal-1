/ *  
   * 	 C o p y r i g h t   ( C )   2 0 0 6 - 2 0 0 7   T e a m   M e d i a P o r t a l  
   * 	 h t t p : / / w w w . t e a m - m e d i a p o r t a l . c o m  
   *  
   *     T h i s   P r o g r a m   i s   f r e e   s o f t w a r e ;   y o u   c a n   r e d i s t r i b u t e   i t   a n d / o r   m o d i f y  
   *     i t   u n d e r   t h e   t e r m s   o f   t h e   G N U   G e n e r a l   P u b l i c   L i c e n s e   a s   p u b l i s h e d   b y  
   *     t h e   F r e e   S o f t w a r e   F o u n d a t i o n ;   e i t h e r   v e r s i o n   2 ,   o r   ( a t   y o u r   o p t i o n )  
   *     a n y   l a t e r   v e r s i o n .  
   *  
   *     T h i s   P r o g r a m   i s   d i s t r i b u t e d   i n   t h e   h o p e   t h a t   i t   w i l l   b e   u s e f u l ,  
   *     b u t   W I T H O U T   A N Y   W A R R A N T Y ;   w i t h o u t   e v e n   t h e   i m p l i e d   w a r r a n t y   o f  
   *     M E R C H A N T A B I L I T Y   o r   F I T N E S S   F O R   A   P A R T I C U L A R   P U R P O S E .   S e e   t h e  
   *     G N U   G e n e r a l   P u b l i c   L i c e n s e   f o r   m o r e   d e t a i l s .  
   *  
   *     Y o u   s h o u l d   h a v e   r e c e i v e d   a   c o p y   o f   t h e   G N U   G e n e r a l   P u b l i c   L i c e n s e  
   *     a l o n g   w i t h   G N U   M a k e ;   s e e   t h e   f i l e   C O P Y I N G .     I f   n o t ,   w r i t e   t o  
   *     t h e   F r e e   S o f t w a r e   F o u n d a t i o n ,   6 7 5   M a s s   A v e ,   C a m b r i d g e ,   M A   0 2 1 3 9 ,   U S A .  
   *     h t t p : / / w w w . g n u . o r g / c o p y l e f t / g p l . h t m l  
   *  
   * /  
  
 # p r a g m a   w a r n i n g (   d i s a b l e :   4 9 9 5   4 9 9 6   )  
  
 # i n c l u d e   " D V B S u b . h "  
 # i n c l u d e   " S u b t i t l e I n p u t P i n . h "  
 # i n c l u d e   " P c r I n p u t P i n . h "  
 # i n c l u d e   " P M T I n p u t P i n . h "  
  
 e x t e r n   v o i d   L o g D e b u g (   c o n s t   c h a r   * f m t ,   . . .   ) ;  
 e x t e r n   v o i d   L o g D e b u g P T S (   c o n s t   c h a r   * f m t ,   u i n t 6 4 _ t   p t s   ) ;  
  
 / /   S e t u p   d a t a  
 c o n s t   A M O V I E S E T U P _ M E D I A T Y P E   s u d P i n T y p e s S u b t i t l e   =  
 {  
 	 & M E D I A T Y P E _ M P E G 2 _ S E C T I O N S ,   & M E D I A S U B T Y P E _ D V B _ S I  
 } ;  
  
 c o n s t   A M O V I E S E T U P _ M E D I A T Y P E   s u d P i n T y p e s I n   =  
 {  
 	 & M E D I A T Y P E _ N U L L ,   & M E D I A S U B T Y P E _ N U L L  
 } ;  
  
 c o n s t   A M O V I E S E T U P _ P I N   s u d P i n s [ 4 ]   =  
 {  
 	 {  
 	 	 L " I n " , 	 	 	 	                 / /   P i n   s t r i n g   n a m e  
 	 	 F A L S E , 	 	 	 	 	 	         / /   I s   i t   r e n d e r e d  
 	 	 F A L S E , 	 	 	 	 	 	         / /   I s   i t   a n   o u t p u t  
 	 	 F A L S E , 	 	 	 	 	 	         / /   A l l o w e d   n o n e  
 	 	 F A L S E , 	 	 	 	 	 	         / /   L i k e w i s e   m a n y  
 	 	 & C L S I D _ N U L L , 	 	 	 	     / /   C o n n e c t s   t o   f i l t e r  
 	 	 L " I n " , 	 	 	 	                 / /   C o n n e c t s   t o   p i n  
 	 	 1 , 	 	 	 	 	 	 	             / /   N u m b e r   o f   t y p e s  
 	 	 & s u d P i n T y p e s S u b t i t l e     / /   P i n   i n f o r m a t i o n  
 	 } ,  
     {  
 	 	 L " P C R " , 	 	 	 	 	         / /   P i n   s t r i n g   n a m e  
 	 	 F A L S E , 	 	 	 	 	 	     / /   I s   i t   r e n d e r e d  
 	 	 F A L S E , 	 	 	 	 	 	     / /   I s   i t   a n   o u t p u t  
 	 	 F A L S E , 	 	 	 	 	 	     / /   A l l o w e d   n o n e  
 	 	 F A L S E , 	 	 	 	 	 	     / /   L i k e w i s e   m a n y  
 	 	 & C L S I D _ N U L L , 	 	 	     / /   C o n n e c t s   t o   f i l t e r  
 	 	 L " P C R " , 	 	 	 	 	         / /   C o n n e c t s   t o   p i n  
 	 	 1 , 	 	 	 	 	 	 	         / /   N u m b e r   o f   t y p e s  
 	 	 & s u d P i n T y p e s I n 	         / /   P i n   i n f o r m a t i o n  
 	 } ,  
 	 {  
 	 	 L " P M T " , 	 	 	 	 	         / /   P i n   s t r i n g   n a m e  
 	 	 F A L S E , 	 	 	 	 	 	     / /   I s   i t   r e n d e r e d  
 	 	 F A L S E , 	 	 	 	 	 	     / /   I s   i t   a n   o u t p u t  
 	 	 F A L S E , 	 	 	 	 	 	     / /   A l l o w e d   n o n e  
 	 	 F A L S E , 	 	 	 	 	 	     / /   L i k e w i s e   m a n y  
 	 	 & C L S I D _ N U L L , 	 	 	     / /   C o n n e c t s   t o   f i l t e r  
 	 	 L " P M T " , 	 	 	 	 	         / /   C o n n e c t s   t o   p i n  
 	 	 1 , 	 	 	 	 	 	 	         / /   N u m b e r   o f   t y p e s  
 	 	 & s u d P i n T y p e s I n 	         / /   P i n   i n f o r m a t i o n  
 	 }  
 } ;  
  
  
 / /  
 / /   C o n s t r u c t o r  
 / /  
 C D V B S u b : : C D V B S u b (   L P U N K N O W N   p U n k ,   H R E S U L T   * p h r ,   C C r i t S e c   * p L o c k   )   :  
     C B a s e F i l t e r (   N A M E ( " M e d i a P o r t a l   D V B S u b " ) ,   p U n k ,   & m _ L o c k ,   C L S I D _ D V B S u b   ) ,  
     m _ p S u b t i t l e I n p u t P i n (   N U L L   ) ,  
 	 m _ p S u b D e c o d e r (   N U L L   ) ,  
     m _ p S u b t i t l e O b s e r v e r (   N U L L   ) ,  
     m _ p T i m e s t a m p R e s e t O b s e r v e r (   N U L L   ) ,  
     m _ b a s e P C R (   - 1   ) ,  
     m _ f i r s t P C R (   - 1   ) ,  
     m _ s t a r t T i m e s t a m p (   - 1   )  
 {  
 	 / /   C r e a t e   s u b t i t l e   d e c o d e r  
 	 m _ p S u b D e c o d e r   =   n e w   C D V B S u b D e c o d e r ( ) ;  
  
 	 i f (   m _ p S u b D e c o d e r   = =   N U L L   )  
 	 {  
         i f (   p h r   )  
 	     {  
             * p h r   =   E _ O U T O F M E M O R Y ;  
 	     }  
         r e t u r n ;  
     }  
  
 	 / /   C r e a t e   s u b t i t l e   i n p u t   p i n  
 	 m _ p S u b t i t l e I n p u t P i n   =   n e w   C S u b t i t l e I n p u t P i n (   t h i s ,  
 	 	 	 	 	 	 	 	 G e t O w n e r ( ) ,  
 	 	 	 	 	 	 	 	 t h i s ,  
 	 	 	 	 	 	 	 	 & m _ L o c k ,  
 	 	 	 	 	 	 	 	 & m _ R e c e i v e L o c k ,  
 	 	 	 	 	 	 	 	 m _ p S u b D e c o d e r ,  
 	 	 	 	 	 	 	 	 p h r   ) ;  
  
 	 i f   (   m _ p S u b t i t l e I n p u t P i n   = =   N U L L   )  
 	 {  
         i f (   p h r   )  
 	 	 {  
             * p h r   =   E _ O U T O F M E M O R Y ;  
 	 	 }  
         r e t u r n ;  
     }  
  
 	 / /   C r e a t e   p c r   i n p u t   p i n  
 	 m _ p P c r P i n   =   n e w   C P c r I n p u t P i n (   t h i s ,  
 	 	 	 	 	 	 	 	 G e t O w n e r ( ) ,  
 	 	 	 	 	 	 	 	 t h i s ,  
 	 	 	 	 	 	 	 	 & m _ L o c k ,  
 	 	 	 	 	 	 	 	 & m _ R e c e i v e L o c k ,  
 	 	 	 	 	 	 	 	 p h r   ) ;  
  
 	 i f   (   m _ p P c r P i n   = =   N U L L   )  
 	 {  
         i f (   p h r   )  
 	 	 {  
             * p h r   =   E _ O U T O F M E M O R Y ;  
 	 	 }  
             r e t u r n ;  
     }  
  
 	 / /   C r e a t e   P M T   i n p u t   p i n  
 	 m _ p P M T P i n   =   n e w   C P M T I n p u t P i n (   t h i s ,  
 	 	 	 	 	 	 	 	 G e t O w n e r ( ) ,  
 	 	 	 	 	 	 	 	 t h i s ,  
 	 	 	 	 	 	 	 	 & m _ L o c k ,  
 	 	 	 	 	 	 	 	 & m _ R e c e i v e L o c k ,  
 	 	 	 	 	 	 	 	 p h r ,  
                                 t h i s   ) ;   / /   M P i d O b s e r v e r  
  
 	 i f   (   m _ p P M T P i n   = =   N U L L   )  
 	 {  
         i f (   p h r   )  
 	 	 {  
             * p h r   =   E _ O U T O F M E M O R Y ;  
 	 	 }  
             r e t u r n ;  
     }  
  
 	 m _ p S u b D e c o d e r - > S e t O b s e r v e r (   t h i s   ) ;  
 }  
  
  
 / /  
 / /   D e s t r u c t o r  
 / /  
 C D V B S u b : : ~ C D V B S u b ( )  
 {  
 	 m _ p S u b D e c o d e r - > S e t O b s e r v e r (   N U L L   ) ;  
 	 d e l e t e   m _ p S u b D e c o d e r ;  
 	 d e l e t e   m _ p S u b t i t l e I n p u t P i n ;  
 	 d e l e t e   m _ p P c r P i n ;  
     d e l e t e   m _ p P M T P i n ;  
 }  
  
  
 / /  
 / /   G e t P i n  
 / /  
 C B a s e P i n   *   C D V B S u b : : G e t P i n (   i n t   n   )  
 {  
 	 i f (   n   = =   0   )  
 	 	 r e t u r n   m _ p S u b t i t l e I n p u t P i n ;  
  
     i f (   n   = =   1   )  
 	 	 r e t u r n   m _ p P c r P i n ;  
  
     i f (   n   = =   2   )  
 	 	 r e t u r n   m _ p P M T P i n ;  
  
     r e t u r n   N U L L ;  
 }  
  
  
 / /  
 / /   G e t P i n C o u n t  
 / /  
 i n t   C D V B S u b : : G e t P i n C o u n t ( )  
 {  
 	 r e t u r n   3 ;   / /   s u b t i t l e   i n ,   p m t ,   p c r  
 }  
  
  
 / /  
 / /   C h e c k C o n n e c t  
 / /  
 H R E S U L T   C D V B S u b : : C h e c k C o n n e c t (   P I N _ D I R E C T I O N   d i r ,   I P i n   * p P i n   )  
 {  
     A M _ M E D I A _ T Y P E   m e d i a T y p e ;  
     i n t   v i d e o P i d   =   0 ;  
  
     p P i n - > C o n n e c t i o n M e d i a T y p e (   & m e d i a T y p e   ) ;  
  
     / /   S e a r c h   f o r   d e m u x e r ' s   v i d e o   p i n  
     i f (     m e d i a T y p e . m a j o r t y p e   = =   M E D I A T Y P E _ V i d e o   & &   d i r   = =   P I N D I R _ I N P U T   )  
     {  
 	     I M P E G 2 P I D M a p *   p M u x M a p P i d ;  
 	     i f (   S U C C E E D E D (   p P i n - > Q u e r y I n t e r f a c e (   & p M u x M a p P i d   )   )   )  
         {  
 	 	     I E n u m P I D M a p   * p I E n u m P I D M a p ;  
 	 	     i f (   S U C C E E D E D (   p M u x M a p P i d - > E n u m P I D M a p (   & p I E n u m P I D M a p   )   )   )  
             {  
 	 	 	     U L O N G   c o u n t   =   0 ;  
 	 	 	     P I D _ M A P   p i d M a p ;  
 	 	 	     w h i l e (   p I E n u m P I D M a p - > N e x t (   1 ,   & p i d M a p ,   & c o u n t   )   = =   S _ O K   )  
                 {  
                     m _ V i d e o P i d   =   p i d M a p . u l P I D ;  
                     m _ p P M T P i n - > S e t V i d e o P i d (   m _ V i d e o P i d   ) ;  
                     L o g D e b u g (   "     f o u n d   v i d e o   P I D   % d " ,     m _ V i d e o P i d   ) ;  
 	 	 	     }  
 	 	     }  
 	 	     p M u x M a p P i d - > R e l e a s e ( ) ;  
         }  
     }  
     r e t u r n   S _ O K ;  
 }  
  
  
 / /  
 / /   R u n  
 / /  
 S T D M E T H O D I M P   C D V B S u b : : R u n (   R E F E R E N C E _ T I M E   t S t a r t   )  
 {  
     m _ s t a r t T i m e s t a m p   =   t S t a r t ;  
     C A u t o L o c k   c O b j e c t L o c k (   m _ p L o c k   ) ;  
     R e s e t ( ) ;  
 	 r e t u r n   C B a s e F i l t e r : : R u n (   t S t a r t   ) ;  
 }  
  
  
 / /  
 / /   P a u s e  
 / /  
 S T D M E T H O D I M P   C D V B S u b : : P a u s e ( )  
 {  
     C A u t o L o c k   c O b j e c t L o c k (   m _ p L o c k   ) ;  
 	 / / R e s e t ( ) ;  
 	 r e t u r n   C B a s e F i l t e r : : P a u s e ( ) ;  
 }  
  
  
 / /  
 / /   S t o p  
 / /  
 S T D M E T H O D I M P   C D V B S u b : : S t o p ( )  
 {  
     C A u t o L o c k   c O b j e c t L o c k (   m _ p L o c k   ) ;  
 	 R e s e t ( ) ;  
 	 r e t u r n   C B a s e F i l t e r : : S t o p ( ) ;  
 }  
  
  
 / /  
 / /   R e s e t  
 / /  
 v o i d   C D V B S u b : : R e s e t ( )  
 {  
 	 L o g D e b u g ( " R e s e t ( ) " ) ;  
     C A u t o L o c k   c O b j e c t L o c k (   m _ p L o c k   ) ;  
  
 	 m _ p S u b D e c o d e r - > R e s e t ( ) ;  
 	 m _ p S u b t i t l e I n p u t P i n - > R e s e t ( ) ;  
  
     m _ f i r s t P C R   =   - 1 ;  
     m _ f i x P C R   =   - 1 ;  
  
     i f (   m _ p T S F i l e S o u r c e   )  
     {  
         R E F E R E N C E _ T I M E   p o s S t a r t (   0   ) ;  
         R E F E R E N C E _ T I M E   p o s B a s e (   0   ) ;  
         m _ p T S F i l e S o u r c e - > G e t S t a r t P C R P o s i t i o n (   & p o s S t a r t   ) ;  
         m _ p T S F i l e S o u r c e - > G e t B a s e P C R P o s i t i o n (   & p o s B a s e   ) ;  
  
         m _ b a s e P C R   =   (   p o s B a s e   /   1 0 0 0   )   *   9 ;  
         L o g D e b u g P T S (   " T S F i l e S o u r c e   b a s e           P C R : " ,   m _ b a s e P C R   ) ;  
         L o g D e b u g P T S (   " T S F i l e S o u r c e   s t a r t i n g   P C R : " ,   (   p o s S t a r t   /   1 0 0 0   )   *   9   ) ;  
     }  
  
     / /   N o t i f y   r e s e t   o b s e r v e r  
     i f (   m _ p T i m e s t a m p R e s e t O b s e r v e r   )  
         ( * m _ p T i m e s t a m p R e s e t O b s e r v e r ) ( ) ;  
 }  
  
  
 / /  
 / /   T e s t  
 / /  
 S T D M E T H O D I M P   C D V B S u b : : T e s t ( i n t   s t a t u s ) {  
 	 L o g D e b u g ( " T E S T   :   % i " ,   s t a t u s ) ;  
 	 r e t u r n   S _ O K ;  
     }  
  
  
 / /  
 / /   N o t i f y S u b t i t l e  
 / /  
 v o i d   C D V B S u b : : N o t i f y S u b t i t l e ( )  
 {  
 	 L o g D e b u g ( " N O T I F Y   -   s u b t i t l e " ) ;  
     / /   c a l c u l a t e   t h e   t i m e   s t a m p  
     C S u b t i t l e *   p S u b t i t l e (   N U L L   ) ;  
     p S u b t i t l e   =   m _ p S u b D e c o d e r - > G e t L a t e s t S u b t i t l e ( ) ;  
     i f (   p S u b t i t l e   )  
     {  
         U L O N G L O N G   p t s   =   p S u b t i t l e - > P T S ( )   -   m _ f i r s t P C R   +   m _ f i x P C R ;  
         p S u b t i t l e - > S e t T i m e s t a m p (   p t s   /   9 0   ) ;     / /   P T S   t o   m i l l i s e c o n d s   (   9 0 k h z   )  
     }  
     i f (   m _ p S u b t i t l e O b s e r v e r   )  
     {  
         / /   N o t i f y   t h e   c a l l b a c k   f u n c t i o n  
 	     S U B T I T L E   s u b ;  
 	     t h i s - > G e t S u b t i t l e ( 0 , & s u b ) ;  
 	     L o g D e b u g ( " C a l l i n g   s u b t i t l e   c a l l b a c k " ) ;  
         i n t   r e t v a l   =   ( * m _ p S u b t i t l e O b s e r v e r ) ( & s u b ) ;  
 	     L o g D e b u g ( " s u b t i t l e   C a l l b a c k   r e t u r n e d " ) ;  
 	     t h i s - > D i s c a r d O l d e s t S u b t i t l e ( ) ;  
     }  
     e l s e  
     {  
 	     L o g D e b u g ( " N o   c a l l b a c k   s e t " ) ;  
     }  
 }  
  
  
 / /  
 / /   N o t i f y F i r s t P T S  
 / /  
 v o i d   C D V B S u b : : N o t i f y F i r s t P T S (   U L O N G L O N G   / * f i r s t P T S * /   )  
 {  
     / /   n o t   u s e d   a n y m o r e  
 }  
  
  
 / /  
 / /   S e t P c r P i d  
 / /  
 v o i d   C D V B S u b : : S e t P c r P i d (   L O N G   p i d   )  
 {  
     m _ p P c r P i n - > S e t P c r P i d (   p i d   ) ;  
 }  
  
  
 / /  
 / /   S e t S u b t i t l e P i d  
 / /  
 v o i d   C D V B S u b : : S e t S u b t i t l e P i d (   L O N G   p i d   )  
 {  
     m _ p S u b t i t l e I n p u t P i n - > S e t S u b t i t l e P i d (   p i d   ) ;  
 }  
  
  
 / /  
 / /   S e t P c r  
 / /  
 v o i d   C D V B S u b : : S e t P c r (   U L O N G L O N G   p c r   )  
 {  
     / /   T h i s   g e t s   c a l l e d   f r o m   P c r I n p u t P i n  
     m _ c u r P C R   =   p c r ;  
  
     i f (   m _ f i r s t P C R   <   0   )  
         m _ f i r s t P C R   =   p c r ;  
  
     i f (   m _ b a s e P C R   <   0   )  
     {  
         L o g D e b u g P T S (   " S e t P c r   P C R   a f t e r   _ d e m u x e r     : " ,   p c r   ) ;  
         C o n n e c t T o T S F i l e S o u r c e ( ) ;  
  
         i f (   m _ p T S F i l e S o u r c e   )  
         {  
             R E F E R E N C E _ T I M E   p o s S t a r t (   0   ) ;  
             R E F E R E N C E _ T I M E   p o s B a s e (   0   ) ;  
             m _ p T S F i l e S o u r c e - > G e t S t a r t P C R P o s i t i o n (   & p o s S t a r t   ) ;  
             m _ p T S F i l e S o u r c e - > G e t B a s e P C R P o s i t i o n (   & p o s B a s e   ) ;  
  
             m _ b a s e P C R   =   (   p o s B a s e   /   1 0 0 0   )   *   9 ;  
             L o g D e b u g P T S (   " T S F i l e S o u r c e   b a s e           P C R : " ,   m _ b a s e P C R   ) ;  
             L o g D e b u g P T S (   " T S F i l e S o u r c e   s t a r t i n g   P C R : " ,   (   p o s S t a r t   /   1 0 0 0   )   *   9   ) ;  
             L o g D e b u g P T S (   " f i x P C R :   " ,   m _ f i x P C R   ) ;  
         }  
 	 }  
     i f   (   m _ f i x P C R   <   0   )  
     {  
         m _ f i x P C R   =   p c r   -   m _ b a s e P C R ;  
     }  
 }  
  
  
 / /  
 / /   C o n n e c t T o T S F i l e S o u r c e  
 / /  
 H R E S U L T   C D V B S u b : : C o n n e c t T o T S F i l e S o u r c e ( )  
 {  
 	 / /   A l r e a d y   c o n n e c t e d ?  
 	 i f (   m _ p T S F i l e S o u r c e   )  
 	 	 r e t u r n   S _ O K ;  
  
 	 I E n u m F i l t e r s   * p E n u m (   N U L L   ) ;  
     I B a s e F i l t e r   * p F i l t e r (   N U L L   ) ;  
     U L O N G   c F e t c h e d (   0   ) ;  
 	 C C o m Q I P t r < I B a s e F i l t e r >   p B a s e F i l t e r ;  
 	 F I L T E R _ I N F O   p F i l t e r I n f o ;  
  
 	 Q u e r y I n t e r f a c e (   I I D _ I B a s e F i l t e r , (   v o i d * * ) & p B a s e F i l t e r   ) ;  
 	 p B a s e F i l t e r - > Q u e r y F i l t e r I n f o (   & p F i l t e r I n f o   ) ;  
  
 	 p F i l t e r I n f o . p G r a p h - > R e l e a s e ( ) ;  
  
 	 i f (   p F i l t e r I n f o . p G r a p h   = =   N U L L   )  
 	 {  
 	 	 r e t u r n   S _ F A L S E ;  
 	 }  
  
     H R E S U L T   h r   =   p F i l t e r I n f o . p G r a p h - > E n u m F i l t e r s (   & p E n u m   ) ;  
     i f (   F A I L E D ( h r )   )  
 	 r e t u r n   h r ;  
  
     w h i l e (   p E n u m - > N e x t (   1 ,   & p F i l t e r ,   & c F e t c h e d   )   = =   S _ O K   )  
     {  
         F I L T E R _ I N F O   F i l t e r I n f o ;  
         h r   =   p F i l t e r - > Q u e r y F i l t e r I n f o (   & F i l t e r I n f o   ) ;  
         i f   (   F A I L E D ( h r )   )  
         {  
             c o n t i n u e ;     / /   N e x t   o n e ?  
         }  
  
         c h a r   s z N a m e [ M A X _ F I L T E R _ N A M E ] ;  
         i n t   c c h   =   W i d e C h a r T o M u l t i B y t e (   C P _ A C P ,   0 ,   F i l t e r I n f o . a c h N a m e ,  
             M A X _ F I L T E R _ N A M E ,   s z N a m e ,   M A X _ F I L T E R _ N A M E ,   0 ,   0   ) ;  
  
         i f (   s t r c m p (   s z N a m e ,   " T s F i l e S o u r c e "   )   = =   0   )  
         {  
             p F i l t e r - > Q u e r y I n t e r f a c e (   I I D _ I T S F i l e S o u r c e ,   (   v o i d * * ) & m _ p T S F i l e S o u r c e   ) ;  
         }  
  
         i f (   F i l t e r I n f o . p G r a p h   ! =   N U L L   )  
         {  
             F i l t e r I n f o . p G r a p h - > R e l e a s e ( ) ;  
         }  
         p F i l t e r - > R e l e a s e ( ) ;  
     }  
  
     i f (   p E n u m   )  
     {  
 	     p E n u m - > R e l e a s e ( ) ;  
     }  
 	 r e t u r n   S _ O K ;  
 }  
  
  
 / /  
 / /   I n t e r f a c e   m e t h o d s  
 / /  
 S T D M E T H O D I M P   C D V B S u b : : G e t S u b t i t l e (   i n t   p l a c e ,   S U B T I T L E *   s u b t i t l e   )  
 {  
     C S u b t i t l e *   p C S u b t i t l e   =   N U L L ;  
  
     i f (   m _ p S u b D e c o d e r   )  
     {  
         p C S u b t i t l e   =   m _ p S u b D e c o d e r - > G e t S u b t i t l e (   p l a c e   ) ;  
     }  
  
     i f (   p C S u b t i t l e   )  
     {  
 	     B I T M A P *   b i t m a p   =   p C S u b t i t l e - > G e t B i t m a p ( ) ;  
 	     L o g D e b u g ( " B i t m a p :   b p p = % i ,   p l a n e s = % i ,   d i m = % i   x   % i " , b i t m a p - > b m B i t s P i x e l , b i t m a p - > b m P l a n e s ,   b i t m a p - > b m W i d t h ,   b i t m a p - > b m H e i g h t ) ;  
 	     s u b t i t l e - > b m B i t s   =   b i t m a p - > b m B i t s ;  
 	     s u b t i t l e - > b m B i t s P i x e l   =   b i t m a p - > b m B i t s P i x e l ;  
         s u b t i t l e - > b m H e i g h t   =   b i t m a p - > b m H e i g h t ;  
 	     s u b t i t l e - > b m P l a n e s   =   b i t m a p - > b m P l a n e s ;  
 	     s u b t i t l e - > b m T y p e   =   b i t m a p - > b m T y p e ;  
 	     s u b t i t l e - > b m W i d t h   =   b i t m a p - > b m W i d t h ;  
 	     L o g D e b u g ( " S t r i d e :   % i "   ,   b i t m a p - > b m W i d t h B y t e s ) ;  
 	     s u b t i t l e - > b m W i d t h B y t e s   =   b i t m a p - > b m W i d t h B y t e s ;  
         s u b t i t l e - > t i m e s t a m p   =   p C S u b t i t l e - > T i m e s t a m p ( ) ;  
         s u b t i t l e - > f i r s t S c a n L i n e   =   p C S u b t i t l e - > F i r s t S c a n l i n e ( ) ;  
         s u b t i t l e - > t i m e O u t   =   p C S u b t i t l e - > T i m e o u t ( ) ;  
 	     L o g D e b u g ( " T I M E O U T     :   % i " ,   s u b t i t l e - > t i m e O u t ) ;  
 	     L o g D e b u g ( " T I M E S T A M P :   % i " ,   s u b t i t l e - > t i m e s t a m p ) ;  
         r e t u r n   S _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   S _ F A L S E ;  
     }  
 }  
  
  
 / /  
 / /   S e t C a l l b a c k  
 / /  
 S T D M E T H O D I M P   C D V B S u b : : S e t C a l l b a c k (   i n t   ( C A L L B A C K   * p S u b t i t l e O b s e r v e r ) ( S U B T I T L E *   s u b )   )  
 {  
 	 L o g D e b u g ( " S e t C a l l b a c k   c a l l e d " ) ;  
     m _ p S u b t i t l e O b s e r v e r   =   p S u b t i t l e O b s e r v e r ;  
     r e t u r n   S _ O K ;  
 }  
  
  
 / /  
 / /   S e t T i m e s t a m p R e s e t C a l l b a c k  
 / /  
 S T D M E T H O D I M P   C D V B S u b : : S e t T i m e s t a m p R e s e t C a l l b a c k (   i n t   ( C A L L B A C K   * p T i m e s t a m p R e s e t O b s e r v e r ) ( )   )  
 {  
 	 L o g D e b u g ( " S e t T i m e s t a m p R e s e t e d C a l l b a c k   c a l l e d " ) ;  
     m _ p T i m e s t a m p R e s e t O b s e r v e r   =   p T i m e s t a m p R e s e t O b s e r v e r ;  
     r e t u r n   S _ O K ;  
 }  
  
  
 / /  
 / /   G e t S u b t i t l e C o u n t  
 / /  
 S T D M E T H O D I M P   C D V B S u b : : G e t S u b t i t l e C o u n t (   i n t *   p c o u n t   )  
 {  
 	 L o g D e b u g ( " G e t S u b t i t l e C o u n t " ) ;  
     i f (   m _ p S u b D e c o d e r   )  
     {  
         * p c o u n t   =   m _ p S u b D e c o d e r - > G e t S u b t i t l e C o u n t ( ) ;  
 	     r e t u r n   S _ O K ;  
     }  
     r e t u r n   S _ F A L S E ;  
 }  
  
  
 / /  
 / /   D i s c a r d O l d e s t S u b t i t l e  
 / /  
 S T D M E T H O D I M P   C D V B S u b : : D i s c a r d O l d e s t S u b t i t l e ( )  
 {  
 	 L o g D e b u g ( " D i s c a r d O l d e s t S u b t i t l e " ) ;  
     i f (   m _ p S u b D e c o d e r   )  
     {  
         m _ p S u b D e c o d e r - > R e l e a s e O l d e s t S u b t i t l e ( ) ;  
 	     r e t u r n   S _ O K ;  
     }  
     r e t u r n   S _ F A L S E ;  
 }  
  
  
 / /  
 / /   C r e a t e I n s t a n c e  
 / /  
 C U n k n o w n   *   W I N A P I   C D V B S u b : : C r e a t e I n s t a n c e (   L P U N K N O W N   p u n k ,   H R E S U L T   * p h r   )  
 {  
     A S S E R T (   p h r   ) ;  
  
     L o g D e b u g ( " C r e a t e I n s t a n c e " ) ;  
     C D V B S u b   * p F i l t e r   =   n e w   C D V B S u b (   p u n k ,   p h r ,   N U L L   ) ;  
     i f (   p F i l t e r   = =   N U L L   )  
 	 {  
         i f   ( p h r )  
 	 	 {  
             * p h r   =   E _ O U T O F M E M O R Y ;  
 	 	 }  
     }  
     r e t u r n   p F i l t e r ;  
 }  
  
  
 / /  
 / /   N o n D e l e g a t i n g Q u e r y I n t e r f a c e  
 / /  
 S T D M E T H O D I M P   C D V B S u b : : N o n D e l e g a t i n g Q u e r y I n t e r f a c e ( R E F I I D   r i i d ,   v o i d * *   p p v )  
 {  
  
 	 i f   ( r i i d   = =   I I D _ I D V B S u b t i t l e ) {  
 	 	 / / L o g D e b u g ( " Q u e r y I n t e r f a c e   i n   D V B S u b . C P P   a c c e p t i n g " ) ;  
 	 	 r e t u r n   G e t I n t e r f a c e ( ( I D V B S u b t i t l e   * )   t h i s ,   p p v ) ;  
 	 }  
 	 e l s e  
 	 {  
 	 	 / / L o g D e b u g ( " F o r w a r d i n g   q u e r y   i n t e r f a c e   c a l l   . . .   " ) ;  
 	 	 H R E S U L T   h r   =   C B a s e F i l t e r : : N o n D e l e g a t i n g Q u e r y I n t e r f a c e ( r i i d , p p v ) ;  
  
 	 	 i f ( S U C C E E D E D ( h r ) ) {  
 	 	 	 / / L o g D e b u g ( " Q I   s u c c e e d e d " ) ;  
 	 	 }  
 	 	 e l s e   i f ( h r   = =   E _ N O I N T E R F A C E ) {  
 	 	 	 / / L o g D e b u g ( " Q I   - >   E _ N O I N T E R F A C E " ) ;  
 	 	 }  
 	 	 e l s e {  
 	 	 	 / / L o g D e b u g ( " Q I   f a i l e d " ) ;  
 	 	 }  
 	 	 r e t u r n   h r ;  
 	 }  
 } 