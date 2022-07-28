inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 34, 6 }));
  set_short( "Corridor - x37y34z6" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y34z6.c",
  "south" : DIR+"/rooms/x37y33z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
