inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 40, 0 }));
  set_short( "Corridor - x5y40z0" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y40z0.c",
  "south" : DIR+"/rooms/x5y39z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
