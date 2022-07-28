inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 60, 9 }));
  set_short( "Hallway - x61y60z9" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y60z9.c",
  "north" : DIR+"/rooms/x61y61z9.c",
  "south" : DIR+"/rooms/x61y59z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
