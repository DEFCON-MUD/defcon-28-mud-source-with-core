inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 5, 7 }));
  set_short( "Corridor - x13y5z7" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y6z7.c",
  "south" : DIR+"/rooms/x13y4z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
