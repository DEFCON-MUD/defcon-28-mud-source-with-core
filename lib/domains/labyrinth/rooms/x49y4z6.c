inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 4, 6 }));
  set_short( "Passage - x49y4z6" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y4z6.c",
  "south" : DIR+"/rooms/x49y3z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
