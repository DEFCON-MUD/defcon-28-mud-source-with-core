inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 34, 8 }));
  set_short( "Corridor - x25y34z8" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y34z8.c",
  "north" : DIR+"/rooms/x25y35z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
