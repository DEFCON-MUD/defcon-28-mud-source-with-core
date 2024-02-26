inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 8, 6 }));
  set_short( "Hallway - x18y8z6" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y8z6.c",
  "east" : DIR+"/rooms/x19y8z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
