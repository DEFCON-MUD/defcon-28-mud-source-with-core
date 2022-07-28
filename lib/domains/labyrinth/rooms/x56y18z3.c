inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 18, 3 }));
  set_short( "Passage - x56y18z3" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y18z3.c",
  "east" : DIR+"/rooms/x57y18z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
