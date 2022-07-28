inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 48, 2 }));
  set_short( "Corridor - x39y48z2" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y48z2.c",
  "north" : DIR+"/rooms/x39y49z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
