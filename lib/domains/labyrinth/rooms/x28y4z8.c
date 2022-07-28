inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 4, 8 }));
  set_short( "Corridor - x28y4z8" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y4z8.c",
  "east" : DIR+"/rooms/x29y4z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
