inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 60, 1 }));
  set_short( "Hallway - x7y60z1" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y60z1.c",
  "north" : DIR+"/rooms/x7y61z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
