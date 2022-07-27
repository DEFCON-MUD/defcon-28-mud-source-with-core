inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 58, 5 }));
  set_short( "Passage - x29y58z5" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y59z5.c",
  "south" : DIR+"/rooms/x29y57z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
