inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 6, 7 }));
  set_short( "Passage - x60y6z7" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y6z7.c",
  "east" : DIR+"/rooms/x61y6z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
