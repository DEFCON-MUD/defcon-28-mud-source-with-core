inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 43, 9 }));
  set_short( "Hallway - x31y43z9" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y44z9.c",
  "south" : DIR+"/rooms/x31y42z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
