inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 46, 3 }));
  set_short( "Corridor - x47y46z3" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y46z3.c",
  "east" : DIR+"/rooms/x48y46z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
