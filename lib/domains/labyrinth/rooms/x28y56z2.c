inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 56, 2 }));
  set_short( "Corridor - x28y56z2" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y56z2.c",
  "east" : DIR+"/rooms/x29y56z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
