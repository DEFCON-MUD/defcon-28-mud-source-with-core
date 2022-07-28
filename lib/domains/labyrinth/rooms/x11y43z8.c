inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 43, 8 }));
  set_short( "Passage - x11y43z8" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y44z8.c",
  "south" : DIR+"/rooms/x11y42z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
