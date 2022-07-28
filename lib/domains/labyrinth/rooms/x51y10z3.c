inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 10, 3 }));
  set_short( "Corridor - x51y10z3" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y10z3.c",
  "north" : DIR+"/rooms/x51y11z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
