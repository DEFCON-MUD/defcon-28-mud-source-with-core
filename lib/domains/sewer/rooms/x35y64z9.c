inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 64, 9 }));
  set_short( "Hallway - x35y64z9" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y64z9.c",
  "east" : DIR+"/rooms/x36y64z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
