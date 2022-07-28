inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 60, 6 }));
  set_short( "Corridor - x13y60z6" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y60z6.c",
  "north" : DIR+"/rooms/x13y61z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
