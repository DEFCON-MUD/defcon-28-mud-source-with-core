inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 42, 2 }));
  set_short( "Corridor - x2y42z2" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y42z2.c",
  "east" : DIR+"/rooms/x3y42z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
