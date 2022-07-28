inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 28, 6 }));
  set_short( "Hallway - x13y28z6" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y28z6.c",
  "north" : DIR+"/rooms/x13y29z6.c",
  "south" : DIR+"/rooms/x13y27z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
