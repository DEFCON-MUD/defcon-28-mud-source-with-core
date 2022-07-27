inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 43, 4 }));
  set_short( "Passage - x41y43z4" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y44z4.c",
  "south" : DIR+"/rooms/x41y42z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
