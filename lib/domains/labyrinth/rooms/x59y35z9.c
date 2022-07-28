inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 35, 9 }));
  set_short( "Corridor - x59y35z9" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y36z9.c",
  "south" : DIR+"/rooms/x59y34z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
