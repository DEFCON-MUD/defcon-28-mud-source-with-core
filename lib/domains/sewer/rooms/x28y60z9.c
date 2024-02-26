inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 60, 9 }));
  set_short( "Passage - x28y60z9" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y60z9.c",
  "east" : DIR+"/rooms/x29y60z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
