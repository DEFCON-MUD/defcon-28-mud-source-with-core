inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 62, 5 }));
  set_short( "Passage - x57y62z5" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y62z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
