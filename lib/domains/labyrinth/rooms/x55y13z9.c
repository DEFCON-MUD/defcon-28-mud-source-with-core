inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 13, 9 }));
  set_short( "Passage - x55y13z9" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y14z9.c",
  "south" : DIR+"/rooms/x55y12z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
