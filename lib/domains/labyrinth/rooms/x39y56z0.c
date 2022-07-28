inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 56, 0 }));
  set_short( "Corridor - x39y56z0" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y56z0.c",
  "east" : DIR+"/rooms/x40y56z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
