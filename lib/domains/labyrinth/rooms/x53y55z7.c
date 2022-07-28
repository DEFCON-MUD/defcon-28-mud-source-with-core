inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 55, 7 }));
  set_short( "Passage - x53y55z7" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y56z7.c",
  "south" : DIR+"/rooms/x53y54z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
