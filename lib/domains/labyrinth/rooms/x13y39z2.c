inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 39, 2 }));
  set_short( "Hallway - x13y39z2" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y40z2.c",
  "south" : DIR+"/rooms/x13y38z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
