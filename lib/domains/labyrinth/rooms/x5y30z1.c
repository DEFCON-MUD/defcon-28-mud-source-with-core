inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 30, 1 }));
  set_short( "Corridor - x5y30z1" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y30z1.c",
  "south" : DIR+"/rooms/x5y29z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
