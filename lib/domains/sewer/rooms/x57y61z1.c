inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 61, 1 }));
  set_short( "Corridor - x57y61z1" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y62z1.c",
  "south" : DIR+"/rooms/x57y60z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
