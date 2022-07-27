inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 34, 8 }));
  set_short( "Corridor - x53y34z8" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y34z8.c",
  "north" : DIR+"/rooms/x53y35z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
