inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 6, 1 }));
  set_short( "Corridor - x29y6z1" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y7z1.c",
  "south" : DIR+"/rooms/x29y5z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
