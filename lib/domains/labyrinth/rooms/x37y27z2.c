inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 27, 2 }));
  set_short( "Passage - x37y27z2" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y28z2.c",
  "south" : DIR+"/rooms/x37y26z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
