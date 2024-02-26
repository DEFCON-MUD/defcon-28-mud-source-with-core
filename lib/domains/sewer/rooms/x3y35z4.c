inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 35, 4 }));
  set_short( "Hallway - x3y35z4" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y36z4.c",
  "south" : DIR+"/rooms/x3y34z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
