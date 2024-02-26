inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 2, 4 }));
  set_short( "Corridor - x42y2z4" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y2z4.c",
  "east" : DIR+"/rooms/x43y2z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
