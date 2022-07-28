inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 59, 8 }));
  set_short( "Hallway - x57y59z8" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y60z8.c",
  "south" : DIR+"/rooms/x57y58z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
