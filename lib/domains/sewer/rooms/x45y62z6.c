inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 62, 6 }));
  set_short( "Corridor - x45y62z6" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y62z6.c",
  "south" : DIR+"/rooms/x45y61z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
