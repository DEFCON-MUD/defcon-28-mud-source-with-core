inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 48, 9 }));
  set_short( "Corridor - x45y48z9" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y48z9.c",
  "east" : DIR+"/rooms/x46y48z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
