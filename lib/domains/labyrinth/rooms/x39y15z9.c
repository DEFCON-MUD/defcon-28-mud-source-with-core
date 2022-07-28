inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 15, 9 }));
  set_short( "Passage - x39y15z9" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y16z9.c",
  "south" : DIR+"/rooms/x39y14z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
