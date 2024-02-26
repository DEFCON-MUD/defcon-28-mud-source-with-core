inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 4, 7 }));
  set_short( "Corridor - x58y4z7" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y4z7.c",
  "east" : DIR+"/rooms/x59y4z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
