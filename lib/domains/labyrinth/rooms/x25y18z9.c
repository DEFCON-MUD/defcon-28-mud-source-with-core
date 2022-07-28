inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 18, 9 }));
  set_short( "Passage - x25y18z9" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y19z9.c",
  "south" : DIR+"/rooms/x25y17z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
