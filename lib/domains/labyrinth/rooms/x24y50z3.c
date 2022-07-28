inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 50, 3 }));
  set_short( "Corridor - x24y50z3" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y50z3.c",
  "east" : DIR+"/rooms/x25y50z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
