inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 12, 9 }));
  set_short( "Passage - x43y12z9" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y12z9.c",
  "north" : DIR+"/rooms/x43y13z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
