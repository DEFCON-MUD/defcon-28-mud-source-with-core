inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 12, 9 }));
  set_short( "Corridor - x15y12z9" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y12z9.c",
  "north" : DIR+"/rooms/x15y13z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
