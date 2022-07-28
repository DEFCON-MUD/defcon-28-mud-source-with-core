inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 41, 9 }));
  set_short( "Passage - x7y41z9" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y42z9.c",
  "south" : DIR+"/rooms/x7y40z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
