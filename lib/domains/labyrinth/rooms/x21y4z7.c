inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 4, 7 }));
  set_short( "Corridor - x21y4z7" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y4z7.c",
  "north" : DIR+"/rooms/x21y5z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
