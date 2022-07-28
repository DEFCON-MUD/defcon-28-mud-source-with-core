inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 52, 8 }));
  set_short( "Corridor - x25y52z8" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y52z8.c",
  "east" : DIR+"/rooms/x26y52z8.c",
  "north" : DIR+"/rooms/x25y53z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
