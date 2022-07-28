inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 53, 2 }));
  set_short( "Passage - x25y53z2" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y54z2.c",
  "south" : DIR+"/rooms/x25y52z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
