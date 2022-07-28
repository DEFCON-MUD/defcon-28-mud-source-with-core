inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 23, 6 }));
  set_short( "Passage - x43y23z6" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y24z6.c",
  "south" : DIR+"/rooms/x43y22z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
