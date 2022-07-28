inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 33, 3 }));
  set_short( "Passage - x11y33z3" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y34z3.c",
  "south" : DIR+"/rooms/x11y32z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
