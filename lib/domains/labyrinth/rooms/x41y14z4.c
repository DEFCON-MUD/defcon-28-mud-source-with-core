inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 14, 4 }));
  set_short( "Hallway - x41y14z4" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y14z4.c",
  "south" : DIR+"/rooms/x41y13z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
