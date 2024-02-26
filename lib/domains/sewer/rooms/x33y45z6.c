inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 45, 6 }));
  set_short( "Hallway - x33y45z6" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y46z6.c",
  "south" : DIR+"/rooms/x33y44z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
