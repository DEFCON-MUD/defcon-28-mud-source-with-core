inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 5 }));
  set_short( "Corridor - x9y60z5" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y60z5.c",
  "north" : DIR+"/rooms/x9y61z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
