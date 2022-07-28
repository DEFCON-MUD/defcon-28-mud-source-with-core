inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 40, 4 }));
  set_short( "Corridor - x13y40z4" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y40z4.c",
  "north" : DIR+"/rooms/x13y41z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
