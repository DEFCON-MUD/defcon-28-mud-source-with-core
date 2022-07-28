inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 50, 8 }));
  set_short( "Corridor - x33y50z8" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y51z8.c",
  "south" : DIR+"/rooms/x33y49z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
