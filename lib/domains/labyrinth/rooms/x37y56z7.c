inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 56, 7 }));
  set_short( "Passage - x37y56z7" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y56z7.c",
  "east" : DIR+"/rooms/x38y56z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
