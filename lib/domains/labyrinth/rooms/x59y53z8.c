inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 53, 8 }));
  set_short( "Hallway - x59y53z8" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y54z8.c",
  "south" : DIR+"/rooms/x59y52z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
