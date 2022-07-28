inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 22, 4 }));
  set_short( "Corridor - x25y22z4" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y23z4.c",
  "south" : DIR+"/rooms/x25y21z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
