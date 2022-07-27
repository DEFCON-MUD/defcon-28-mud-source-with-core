inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 32, 1 }));
  set_short( "Passage - x39y32z1" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y32z1.c",
  "north" : DIR+"/rooms/x39y33z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
