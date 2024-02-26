inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 61, 1 }));
  set_short( "Corridor - x47y61z1" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y62z1.c",
  "south" : DIR+"/rooms/x47y60z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
