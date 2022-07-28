inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 21, 6 }));
  set_short( "Passage - x55y21z6" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y22z6.c",
  "south" : DIR+"/rooms/x55y20z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
