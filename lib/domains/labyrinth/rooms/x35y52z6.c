inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 52, 6 }));
  set_short( "Hallway - x35y52z6" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y53z6.c",
  "south" : DIR+"/rooms/x35y51z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
