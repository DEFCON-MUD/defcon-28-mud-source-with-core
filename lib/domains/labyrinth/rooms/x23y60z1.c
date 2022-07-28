inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 60, 1 }));
  set_short( "Hallway - x23y60z1" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y60z1.c",
  "north" : DIR+"/rooms/x23y61z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
