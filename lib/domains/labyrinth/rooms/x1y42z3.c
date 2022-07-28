inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 42, 3 }));
  set_short( "Passage - x1y42z3" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y42z3.c",
  "south" : DIR+"/rooms/x1y41z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
