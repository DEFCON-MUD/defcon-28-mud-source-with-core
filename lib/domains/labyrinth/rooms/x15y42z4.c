inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 42, 4 }));
  set_short( "Corridor - x15y42z4" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y42z4.c",
  "north" : DIR+"/rooms/x15y43z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
