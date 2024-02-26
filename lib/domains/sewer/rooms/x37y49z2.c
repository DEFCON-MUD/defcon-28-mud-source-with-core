inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 49, 2 }));
  set_short( "Hallway - x37y49z2" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y50z2.c",
  "south" : DIR+"/rooms/x37y48z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
