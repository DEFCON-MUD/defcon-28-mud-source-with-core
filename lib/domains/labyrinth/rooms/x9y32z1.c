inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 32, 1 }));
  set_short( "Passage - x9y32z1" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y32z1.c",
  "south" : DIR+"/rooms/x9y31z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
