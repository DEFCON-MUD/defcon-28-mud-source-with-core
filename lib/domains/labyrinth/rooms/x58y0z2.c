inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 0, 2 }));
  set_short( "Passage - x58y0z2" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y0z2.c",
  "east" : DIR+"/rooms/x59y0z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
