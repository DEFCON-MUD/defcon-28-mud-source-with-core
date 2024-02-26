inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 8, 7 }));
  set_short( "Passage - x6y8z7" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y8z7.c",
  "east" : DIR+"/rooms/x7y8z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
