inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 30, 1 }));
  set_short( "Hallway - x31y30z1" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y30z1.c",
  "south" : DIR+"/rooms/x31y29z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
