inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 5, 1 }));
  set_short( "Passage - x51y5z1" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y6z1.c",
  "south" : DIR+"/rooms/x51y4z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
