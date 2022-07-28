inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 6, 5 }));
  set_short( "Hallway - x2y6z5" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y6z5.c",
  "east" : DIR+"/rooms/x3y6z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
