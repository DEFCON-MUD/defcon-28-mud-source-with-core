inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 21, 4 }));
  set_short( "Corridor - x17y21z4" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y22z4.c",
  "south" : DIR+"/rooms/x17y20z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
