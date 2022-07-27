inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 53, 5 }));
  set_short( "Corridor - x33y53z5" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y54z5.c",
  "south" : DIR+"/rooms/x33y52z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
