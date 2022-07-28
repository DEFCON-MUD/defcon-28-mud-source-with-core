inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 50, 1 }));
  set_short( "Passage - x57y50z1" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y50z1.c",
  "south" : DIR+"/rooms/x57y49z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
