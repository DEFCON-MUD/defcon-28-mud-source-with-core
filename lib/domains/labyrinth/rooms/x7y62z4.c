inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 62, 4 }));
  set_short( "Hallway - x7y62z4" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y62z4.c",
  "east" : DIR+"/rooms/x8y62z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
