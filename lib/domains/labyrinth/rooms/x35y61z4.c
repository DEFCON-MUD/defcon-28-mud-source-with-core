inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 61, 4 }));
  set_short( "Hallway - x35y61z4" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y62z4.c",
  "south" : DIR+"/rooms/x35y60z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
