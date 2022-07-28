inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 50, 0 }));
  set_short( "Passage - x52y50z0" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y50z0.c",
  "east" : DIR+"/rooms/x53y50z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
