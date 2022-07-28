inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 2, 7 }));
  set_short( "Hallway - x39y2z7" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y2z7.c",
  "north" : DIR+"/rooms/x39y3z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
