inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 34, 8 }));
  set_short( "Corridor - x39y34z8" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y34z8.c",
  "north" : DIR+"/rooms/x39y35z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
