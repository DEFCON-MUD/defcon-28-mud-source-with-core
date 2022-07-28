inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 0, 0 }));
  set_short( "Passage - x27y0z0" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y0z0.c",
  "east" : DIR+"/rooms/x28y0z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
