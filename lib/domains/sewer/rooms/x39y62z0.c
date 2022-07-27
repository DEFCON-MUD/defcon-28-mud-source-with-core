inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 62, 0 }));
  set_short( "Corridor - x39y62z0" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y62z0.c",
  "south" : DIR+"/rooms/x39y61z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
