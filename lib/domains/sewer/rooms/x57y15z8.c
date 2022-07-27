inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 15, 8 }));
  set_short( "Hallway - x57y15z8" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y16z8.c",
  "south" : DIR+"/rooms/x57y14z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
