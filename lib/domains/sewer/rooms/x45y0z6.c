inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 0, 6 }));
  set_short( "Corridor - x45y0z6" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y0z6.c",
  "east" : DIR+"/rooms/x46y0z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
