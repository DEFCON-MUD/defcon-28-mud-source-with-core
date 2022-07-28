inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 59, 7 }));
  set_short( "Hallway - x23y59z7" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y60z7.c",
  "south" : DIR+"/rooms/x23y58z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
