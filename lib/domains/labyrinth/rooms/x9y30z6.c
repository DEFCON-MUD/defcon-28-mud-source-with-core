inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 30, 6 }));
  set_short( "Passage - x9y30z6" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y30z6.c",
  "south" : DIR+"/rooms/x9y29z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
