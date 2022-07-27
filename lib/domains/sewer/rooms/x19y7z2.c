inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 7, 2 }));
  set_short( "Hallway - x19y7z2" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y8z2.c",
  "south" : DIR+"/rooms/x19y6z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
