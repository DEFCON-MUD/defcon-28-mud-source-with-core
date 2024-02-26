inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 26, 3 }));
  set_short( "Hallway - x18y26z3" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y26z3.c",
  "east" : DIR+"/rooms/x19y26z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
