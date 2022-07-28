inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 53, 4 }));
  set_short( "Passage - x25y53z4" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y54z4.c",
  "south" : DIR+"/rooms/x25y52z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
