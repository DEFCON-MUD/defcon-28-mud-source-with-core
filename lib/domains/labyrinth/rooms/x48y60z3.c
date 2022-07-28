inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 60, 3 }));
  set_short( "Corridor - x48y60z3" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y60z3.c",
  "east" : DIR+"/rooms/x49y60z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
