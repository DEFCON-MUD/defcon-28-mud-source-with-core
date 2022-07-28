inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 39, 5 }));
  set_short( "Passage - x1y39z5" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y40z5.c",
  "south" : DIR+"/rooms/x1y38z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
