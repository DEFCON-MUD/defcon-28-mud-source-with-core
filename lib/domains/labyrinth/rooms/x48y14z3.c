inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 14, 3 }));
  set_short( "Hallway - x48y14z3" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y14z3.c",
  "east" : DIR+"/rooms/x49y14z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
