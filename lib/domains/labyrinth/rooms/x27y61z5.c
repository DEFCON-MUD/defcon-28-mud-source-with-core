inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 61, 5 }));
  set_short( "Passage - x27y61z5" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y62z5.c",
  "south" : DIR+"/rooms/x27y60z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
