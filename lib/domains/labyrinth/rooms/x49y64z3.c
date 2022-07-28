inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 64, 3 }));
  set_short( "Corridor - x49y64z3" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y64z3.c",
  "east" : DIR+"/rooms/x50y64z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
