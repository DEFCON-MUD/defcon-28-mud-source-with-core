inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 8 }));
  set_short( "Corridor - x1y14z8" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y14z8.c",
  "north" : DIR+"/rooms/x1y15z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
