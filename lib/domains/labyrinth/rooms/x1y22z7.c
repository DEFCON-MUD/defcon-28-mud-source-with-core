inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 22, 7 }));
  set_short( "Passage - x1y22z7" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y23z7.c",
  "south" : DIR+"/rooms/x1y21z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
