inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 49, 2 }));
  set_short( "Corridor - x37y49z2" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y50z2.c",
  "south" : DIR+"/rooms/x37y48z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
