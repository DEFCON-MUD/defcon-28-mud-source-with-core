inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 53, 8 }));
  set_short( "Hallway - x37y53z8" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y54z8.c",
  "south" : DIR+"/rooms/x37y52z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
