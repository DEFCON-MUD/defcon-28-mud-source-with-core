inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 21, 4 }));
  set_short( "Hallway - x51y21z4" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y22z4.c",
  "south" : DIR+"/rooms/x51y20z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
