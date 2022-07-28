inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 6, 1 }));
  set_short( "Passage - x55y6z1" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y6z1.c",
  "north" : DIR+"/rooms/x55y7z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
