inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 48, 6 }));
  set_short( "Hallway - x29y48z6" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y49z6.c",
  "south" : DIR+"/rooms/x29y47z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
