inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 7, 7 }));
  set_short( "Hallway - x3y7z7" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y8z7.c",
  "south" : DIR+"/rooms/x3y6z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
