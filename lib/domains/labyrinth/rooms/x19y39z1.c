inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 39, 1 }));
  set_short( "Passage - x19y39z1" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y40z1.c",
  "south" : DIR+"/rooms/x19y38z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
