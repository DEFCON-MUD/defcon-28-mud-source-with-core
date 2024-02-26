inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 54, 9 }));
  set_short( "Hallway - x45y54z9" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y54z9.c",
  "east" : DIR+"/rooms/x46y54z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
