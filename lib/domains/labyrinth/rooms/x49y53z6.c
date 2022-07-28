inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 53, 6 }));
  set_short( "Passage - x49y53z6" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y54z6.c",
  "south" : DIR+"/rooms/x49y52z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
