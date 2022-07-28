inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 60, 9 }));
  set_short( "Corridor - x21y60z9" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y60z9.c",
  "north" : DIR+"/rooms/x21y61z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
