inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 32, 4 }));
  set_short( "Corridor - x48y32z4" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y32z4.c",
  "east" : DIR+"/rooms/x49y32z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
