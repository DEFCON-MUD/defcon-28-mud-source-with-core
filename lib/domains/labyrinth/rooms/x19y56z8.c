inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 56, 8 }));
  set_short( "Passage - x19y56z8" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y57z8.c",
  "south" : DIR+"/rooms/x19y55z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
