inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 22, 6 }));
  set_short( "Hallway - x21y22z6" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y23z6.c",
  "south" : DIR+"/rooms/x21y21z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
