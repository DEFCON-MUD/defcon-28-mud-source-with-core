inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 33, 7 }));
  set_short( "Passage - x11y33z7" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y34z7.c",
  "south" : DIR+"/rooms/x11y32z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
