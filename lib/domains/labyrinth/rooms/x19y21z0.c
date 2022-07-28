inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 21, 0 }));
  set_short( "Passage - x19y21z0" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y22z0.c",
  "south" : DIR+"/rooms/x19y20z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
