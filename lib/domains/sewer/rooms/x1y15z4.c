inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 15, 4 }));
  set_short( "Passage - x1y15z4" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y16z4.c",
  "south" : DIR+"/rooms/x1y14z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
