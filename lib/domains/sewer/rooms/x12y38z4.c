inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 38, 4 }));
  set_short( "Passage - x12y38z4" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y38z4.c",
  "east" : DIR+"/rooms/x13y38z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
