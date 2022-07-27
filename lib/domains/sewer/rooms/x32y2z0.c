inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 2, 0 }));
  set_short( "Corridor - x32y2z0" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y2z0.c",
  "east" : DIR+"/rooms/x33y2z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
