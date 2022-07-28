inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 38, 7 }));
  set_short( "Passage - x13y38z7" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y38z7.c",
  "north" : DIR+"/rooms/x13y39z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
