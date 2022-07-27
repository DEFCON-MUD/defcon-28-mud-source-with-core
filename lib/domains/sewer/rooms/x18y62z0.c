inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 62, 0 }));
  set_short( "Corridor - x18y62z0" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y62z0.c",
  "east" : DIR+"/rooms/x19y62z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
