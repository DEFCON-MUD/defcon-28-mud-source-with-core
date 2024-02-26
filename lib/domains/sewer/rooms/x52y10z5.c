inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 10, 5 }));
  set_short( "Corridor - x52y10z5" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y10z5.c",
  "east" : DIR+"/rooms/x53y10z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
