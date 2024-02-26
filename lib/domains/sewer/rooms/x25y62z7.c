inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 62, 7 }));
  set_short( "Corridor - x25y62z7" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y62z7.c",
  "east" : DIR+"/rooms/x26y62z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
