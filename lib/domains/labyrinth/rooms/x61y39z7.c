inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 39, 7 }));
  set_short( "Passage - x61y39z7" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y40z7.c",
  "south" : DIR+"/rooms/x61y38z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
