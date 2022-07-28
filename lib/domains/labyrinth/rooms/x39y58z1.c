inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 58, 1 }));
  set_short( "Passage - x39y58z1" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y58z1.c",
  "east" : DIR+"/rooms/x40y58z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
