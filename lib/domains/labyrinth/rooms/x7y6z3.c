inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 6, 3 }));
  set_short( "Passage - x7y6z3" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y6z3.c",
  "east" : DIR+"/rooms/x8y6z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
