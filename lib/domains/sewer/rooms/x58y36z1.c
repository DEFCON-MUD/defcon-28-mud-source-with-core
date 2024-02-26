inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 36, 1 }));
  set_short( "Hallway - x58y36z1" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y36z1.c",
  "east" : DIR+"/rooms/x59y36z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
