inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 42, 7 }));
  set_short( "Hallway - x19y42z7" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y42z7.c",
  "south" : DIR+"/rooms/x19y41z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
