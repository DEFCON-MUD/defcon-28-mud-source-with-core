inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 36, 6 }));
  set_short( "Hallway - x59y36z6" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y36z6.c",
  "north" : DIR+"/rooms/x59y37z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
