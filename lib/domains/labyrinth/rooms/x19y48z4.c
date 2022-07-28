inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 48, 4 }));
  set_short( "Corridor - x19y48z4" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y48z4.c",
  "south" : DIR+"/rooms/x19y47z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
