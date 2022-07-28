inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 39, 1 }));
  set_short( "Corridor - x53y39z1" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y40z1.c",
  "south" : DIR+"/rooms/x53y38z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
