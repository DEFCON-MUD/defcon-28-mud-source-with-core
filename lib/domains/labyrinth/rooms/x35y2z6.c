inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 2, 6 }));
  set_short( "Corridor - x35y2z6" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y2z6.c",
  "east" : DIR+"/rooms/x36y2z6.c",
  "north" : DIR+"/rooms/x35y3z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
