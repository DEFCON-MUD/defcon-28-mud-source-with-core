inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 2, 3 }));
  set_short( "Corridor - x33y2z3" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y2z3.c",
  "east" : DIR+"/rooms/x34y2z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
