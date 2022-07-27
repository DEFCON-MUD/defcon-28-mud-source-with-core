inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 60, 5 }));
  set_short( "Hallway - x29y60z5" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y60z5.c",
  "north" : DIR+"/rooms/x29y61z5.c",
  "south" : DIR+"/rooms/x29y59z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
