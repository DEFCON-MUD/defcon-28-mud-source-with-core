inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 8, 2 }));
  set_short( "Corridor - x11y8z2" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y9z2.c",
  "south" : DIR+"/rooms/x11y7z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
