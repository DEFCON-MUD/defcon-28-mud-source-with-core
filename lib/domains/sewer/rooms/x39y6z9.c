inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 6, 9 }));
  set_short( "Hallway - x39y6z9" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y6z9.c",
  "east" : DIR+"/rooms/x40y6z9.c",
  "north" : DIR+"/rooms/x39y7z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
