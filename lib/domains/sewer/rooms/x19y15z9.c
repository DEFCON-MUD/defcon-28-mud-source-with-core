inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 15, 9 }));
  set_short( "Hallway - x19y15z9" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y16z9.c",
  "south" : DIR+"/rooms/x19y14z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
