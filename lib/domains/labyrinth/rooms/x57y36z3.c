inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 36, 3 }));
  set_short( "Hallway - x57y36z3" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y36z3.c",
  "north" : DIR+"/rooms/x57y37z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
