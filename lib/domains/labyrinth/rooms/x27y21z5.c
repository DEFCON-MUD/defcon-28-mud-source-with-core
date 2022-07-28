inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 21, 5 }));
  set_short( "Hallway - x27y21z5" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y22z5.c",
  "south" : DIR+"/rooms/x27y20z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
