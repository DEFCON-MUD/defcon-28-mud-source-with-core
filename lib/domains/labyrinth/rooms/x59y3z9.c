inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 3, 9 }));
  set_short( "Hallway - x59y3z9" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y4z9.c",
  "south" : DIR+"/rooms/x59y2z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
