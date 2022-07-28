inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 9, 2 }));
  set_short( "Hallway - x59y9z2" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y10z2.c",
  "south" : DIR+"/rooms/x59y8z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
