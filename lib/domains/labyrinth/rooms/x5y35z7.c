inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 35, 7 }));
  set_short( "Corridor - x5y35z7" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y36z7.c",
  "south" : DIR+"/rooms/x5y34z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
