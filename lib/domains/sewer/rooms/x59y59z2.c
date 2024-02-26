inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 59, 2 }));
  set_short( "Passage - x59y59z2" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y60z2.c",
  "south" : DIR+"/rooms/x59y58z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
