inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 1 }));
  set_short( "Passage - x9y60z1" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y60z1.c",
  "east" : DIR+"/rooms/x10y60z1.c",
  "north" : DIR+"/rooms/x9y61z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
