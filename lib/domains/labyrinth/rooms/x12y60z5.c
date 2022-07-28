inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 60, 5 }));
  set_short( "Passage - x12y60z5" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y60z5.c",
  "east" : DIR+"/rooms/x13y60z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
