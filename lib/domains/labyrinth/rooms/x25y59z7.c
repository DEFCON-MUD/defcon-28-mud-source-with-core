inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 59, 7 }));
  set_short( "Hallway - x25y59z7" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y60z7.c",
  "south" : DIR+"/rooms/x25y58z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
