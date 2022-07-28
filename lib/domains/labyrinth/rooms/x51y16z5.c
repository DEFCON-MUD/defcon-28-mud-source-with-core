inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 16, 5 }));
  set_short( "Passage - x51y16z5" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y16z5.c",
  "south" : DIR+"/rooms/x51y15z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
