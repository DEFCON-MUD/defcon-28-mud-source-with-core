inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 46, 1 }));
  set_short( "Passage - x49y46z1" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y46z1.c",
  "south" : DIR+"/rooms/x49y45z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
