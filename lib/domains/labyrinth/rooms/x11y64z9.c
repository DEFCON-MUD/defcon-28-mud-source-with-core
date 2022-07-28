inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 64, 9 }));
  set_short( "Corridor - x11y64z9" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y64z9.c",
  "east" : DIR+"/rooms/x12y64z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
