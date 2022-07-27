inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 37, 1 }));
  set_short( "Hallway - x25y37z1" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y38z1.c",
  "south" : DIR+"/rooms/x25y36z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
