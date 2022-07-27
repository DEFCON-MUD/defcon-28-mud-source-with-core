inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 31, 8 }));
  set_short( "Corridor - x29y31z8" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y32z8.c",
  "south" : DIR+"/rooms/x29y30z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
