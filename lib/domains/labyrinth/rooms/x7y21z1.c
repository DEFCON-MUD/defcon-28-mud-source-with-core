inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 21, 1 }));
  set_short( "Hallway - x7y21z1" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y22z1.c",
  "south" : DIR+"/rooms/x7y20z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
