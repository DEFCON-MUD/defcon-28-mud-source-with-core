inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 34, 0 }));
  set_short( "Passage - x48y34z0" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y34z0.c",
  "east" : DIR+"/rooms/x49y34z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
