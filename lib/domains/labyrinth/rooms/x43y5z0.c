inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 5, 0 }));
  set_short( "Corridor - x43y5z0" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y6z0.c",
  "south" : DIR+"/rooms/x43y4z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
