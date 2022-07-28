inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 3, 2 }));
  set_short( "Passage - x17y3z2" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y4z2.c",
  "south" : DIR+"/rooms/x17y2z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
