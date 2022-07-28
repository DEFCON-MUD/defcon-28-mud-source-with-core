inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 59, 8 }));
  set_short( "Passage - x37y59z8" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y60z8.c",
  "south" : DIR+"/rooms/x37y58z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
