inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 28, 5 }));
  set_short( "Corridor - x46y28z5" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y28z5.c",
  "east" : DIR+"/rooms/x47y28z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
