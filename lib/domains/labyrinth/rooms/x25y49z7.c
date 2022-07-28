inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 49, 7 }));
  set_short( "Corridor - x25y49z7" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y50z7.c",
  "south" : DIR+"/rooms/x25y48z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
