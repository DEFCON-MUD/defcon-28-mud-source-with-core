inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 4, 7 }));
  set_short( "Hallway - x59y4z7" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y4z7.c",
  "north" : DIR+"/rooms/x59y5z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
