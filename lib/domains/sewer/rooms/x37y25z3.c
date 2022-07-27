inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 25, 3 }));
  set_short( "Hallway - x37y25z3" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y26z3.c",
  "south" : DIR+"/rooms/x37y24z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
