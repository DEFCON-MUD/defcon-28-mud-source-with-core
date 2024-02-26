inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 2, 1 }));
  set_short( "Hallway - x61y2z1" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y2z1.c",
  "north" : DIR+"/rooms/x61y3z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
