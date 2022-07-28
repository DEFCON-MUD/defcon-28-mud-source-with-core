inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 3, 9 }));
  set_short( "Passage - x1y3z9" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y4z9.c",
  "south" : DIR+"/rooms/x1y2z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
