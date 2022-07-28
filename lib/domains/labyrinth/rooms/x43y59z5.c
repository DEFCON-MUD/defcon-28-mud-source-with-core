inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 59, 5 }));
  set_short( "Passage - x43y59z5" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y60z5.c",
  "south" : DIR+"/rooms/x43y58z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
