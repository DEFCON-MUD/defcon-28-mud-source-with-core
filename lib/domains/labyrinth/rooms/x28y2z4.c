inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 2, 4 }));
  set_short( "Passage - x28y2z4" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y2z4.c",
  "east" : DIR+"/rooms/x29y2z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
