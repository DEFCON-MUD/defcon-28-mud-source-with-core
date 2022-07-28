inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 60, 3 }));
  set_short( "Corridor - x2y60z3" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y60z3.c",
  "east" : DIR+"/rooms/x3y60z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
