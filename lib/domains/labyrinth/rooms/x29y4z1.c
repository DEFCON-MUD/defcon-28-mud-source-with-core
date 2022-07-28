inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 4, 1 }));
  set_short( "Corridor - x29y4z1" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y4z1.c",
  "north" : DIR+"/rooms/x29y5z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
