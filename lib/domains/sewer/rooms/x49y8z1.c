inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 8, 1 }));
  set_short( "Corridor - x49y8z1" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y8z1.c",
  "east" : DIR+"/rooms/x50y8z1.c",
  "north" : DIR+"/rooms/x49y9z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
