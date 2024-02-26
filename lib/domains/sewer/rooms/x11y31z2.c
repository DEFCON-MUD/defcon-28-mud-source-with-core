inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 31, 2 }));
  set_short( "Corridor - x11y31z2" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y32z2.c",
  "south" : DIR+"/rooms/x11y30z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
