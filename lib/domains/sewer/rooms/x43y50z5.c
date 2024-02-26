inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 50, 5 }));
  set_short( "Corridor - x43y50z5" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y50z5.c",
  "north" : DIR+"/rooms/x43y51z5.c",
  "south" : DIR+"/rooms/x43y49z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
