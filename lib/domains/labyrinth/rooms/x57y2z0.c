inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 2, 0 }));
  set_short( "Corridor - x57y2z0" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y2z0.c",
  "east" : DIR+"/rooms/x58y2z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
