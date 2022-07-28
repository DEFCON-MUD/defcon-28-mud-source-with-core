inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 60, 1 }));
  set_short( "Corridor - x25y60z1" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y60z1.c",
  "north" : DIR+"/rooms/x25y61z1.c",
  "south" : DIR+"/rooms/x25y59z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
