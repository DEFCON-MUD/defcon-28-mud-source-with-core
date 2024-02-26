inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 20, 1 }));
  set_short( "Corridor - x19y20z1" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y20z1.c",
  "south" : DIR+"/rooms/x19y19z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
