inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 60, 5 }));
  set_short( "Passage - x50y60z5" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y60z5.c",
  "east" : DIR+"/rooms/x51y60z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
