inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 31, 5 }));
  set_short( "Passage - x15y31z5" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y32z5.c",
  "south" : DIR+"/rooms/x15y30z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
