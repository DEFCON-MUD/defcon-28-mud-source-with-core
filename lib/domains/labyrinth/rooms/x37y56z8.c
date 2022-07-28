inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 56, 8 }));
  set_short( "Hallway - x37y56z8" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y56z8.c",
  "east" : DIR+"/rooms/x38y56z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
