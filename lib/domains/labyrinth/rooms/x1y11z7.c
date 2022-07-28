inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 11, 7 }));
  set_short( "Passage - x1y11z7" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y12z7.c",
  "south" : DIR+"/rooms/x1y10z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
