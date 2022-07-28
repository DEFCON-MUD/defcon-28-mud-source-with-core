inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 24, 3 }));
  set_short( "Passage - x61y24z3" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y25z3.c",
  "south" : DIR+"/rooms/x61y23z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
