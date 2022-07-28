inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 30, 5 }));
  set_short( "Hallway - x59y30z5" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y30z5.c",
  "east" : DIR+"/rooms/x60y30z5.c",
  "north" : DIR+"/rooms/x59y31z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
