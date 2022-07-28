inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 60, 3 }));
  set_short( "Corridor - x56y60z3" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y60z3.c",
  "east" : DIR+"/rooms/x57y60z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
