inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 20, 2 }));
  set_short( "Corridor - x25y20z2" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y20z2.c",
  "south" : DIR+"/rooms/x25y19z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
