inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 48, 9 }));
  set_short( "Corridor - x57y48z9" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y48z9.c",
  "north" : DIR+"/rooms/x57y49z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
