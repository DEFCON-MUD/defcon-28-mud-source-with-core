inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 58, 0 }));
  set_short( "Passage - x15y58z0" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y59z0.c",
  "south" : DIR+"/rooms/x15y57z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
