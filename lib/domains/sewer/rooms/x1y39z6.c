inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 39, 6 }));
  set_short( "Passage - x1y39z6" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y40z6.c",
  "south" : DIR+"/rooms/x1y38z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
