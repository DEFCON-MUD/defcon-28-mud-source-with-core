inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 34, 0 }));
  set_short( "Passage - x27y34z0" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y35z0.c",
  "south" : DIR+"/rooms/x27y33z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
