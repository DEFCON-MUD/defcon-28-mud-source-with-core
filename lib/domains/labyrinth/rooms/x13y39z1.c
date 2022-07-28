inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 39, 1 }));
  set_short( "Hallway - x13y39z1" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y40z1.c",
  "south" : DIR+"/rooms/x13y38z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
