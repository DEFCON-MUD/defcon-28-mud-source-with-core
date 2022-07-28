inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 7, 5 }));
  set_short( "Hallway - x53y7z5" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y8z5.c",
  "south" : DIR+"/rooms/x53y6z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
