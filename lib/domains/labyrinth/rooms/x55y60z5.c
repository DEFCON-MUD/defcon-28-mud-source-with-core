inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 60, 5 }));
  set_short( "Hallway - x55y60z5" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y60z5.c",
  "north" : DIR+"/rooms/x55y61z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
