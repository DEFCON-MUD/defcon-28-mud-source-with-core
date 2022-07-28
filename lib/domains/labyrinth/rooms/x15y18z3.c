inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 18, 3 }));
  set_short( "Corridor - x15y18z3" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y18z3.c",
  "north" : DIR+"/rooms/x15y19z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
