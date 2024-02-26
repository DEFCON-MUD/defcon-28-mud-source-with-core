inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 31, 1 }));
  set_short( "Passage - x37y31z1" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y32z1.c",
  "south" : DIR+"/rooms/x37y30z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
