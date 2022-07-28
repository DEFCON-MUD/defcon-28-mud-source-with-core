inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 64, 6 }));
  set_short( "Hallway - x28y64z6" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y64z6.c",
  "east" : DIR+"/rooms/x29y64z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
