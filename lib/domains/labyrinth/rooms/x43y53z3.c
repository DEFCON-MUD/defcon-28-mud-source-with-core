inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 53, 3 }));
  set_short( "Passage - x43y53z3" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y54z3.c",
  "south" : DIR+"/rooms/x43y52z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
