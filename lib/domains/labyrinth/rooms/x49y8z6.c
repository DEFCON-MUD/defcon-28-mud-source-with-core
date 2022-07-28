inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 8, 6 }));
  set_short( "Passage - x49y8z6" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y8z6.c",
  "south" : DIR+"/rooms/x49y7z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
