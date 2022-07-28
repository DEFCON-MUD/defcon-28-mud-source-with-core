inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 20, 3 }));
  set_short( "Corridor - x33y20z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y20z3.c",
  "south" : DIR+"/rooms/x33y19z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
