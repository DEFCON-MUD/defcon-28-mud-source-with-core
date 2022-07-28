inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 34, 4 }));
  set_short( "Corridor - x17y34z4" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y34z4.c",
  "south" : DIR+"/rooms/x17y33z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
