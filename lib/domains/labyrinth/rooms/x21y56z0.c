inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 56, 0 }));
  set_short( "Corridor - x21y56z0" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y56z0.c",
  "east" : DIR+"/rooms/x22y56z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
