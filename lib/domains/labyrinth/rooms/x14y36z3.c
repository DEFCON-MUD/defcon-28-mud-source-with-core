inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 36, 3 }));
  set_short( "Corridor - x14y36z3" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y36z3.c",
  "east" : DIR+"/rooms/x15y36z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
