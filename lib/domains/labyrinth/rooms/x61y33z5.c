inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 33, 5 }));
  set_short( "Hallway - x61y33z5" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y34z5.c",
  "south" : DIR+"/rooms/x61y32z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
