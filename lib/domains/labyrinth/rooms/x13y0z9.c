inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 0, 9 }));
  set_short( "Corridor - x13y0z9" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y0z9.c",
  "east" : DIR+"/rooms/x14y0z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
