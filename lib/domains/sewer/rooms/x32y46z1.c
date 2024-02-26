inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 46, 1 }));
  set_short( "Corridor - x32y46z1" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y46z1.c",
  "east" : DIR+"/rooms/x33y46z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
