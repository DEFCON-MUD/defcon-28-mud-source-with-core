inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 20, 2 }));
  set_short( "Passage - x23y20z2" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y20z2.c",
  "north" : DIR+"/rooms/x23y21z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
