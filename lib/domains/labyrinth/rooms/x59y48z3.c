inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 48, 3 }));
  set_short( "Hallway - x59y48z3" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y48z3.c",
  "north" : DIR+"/rooms/x59y49z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
