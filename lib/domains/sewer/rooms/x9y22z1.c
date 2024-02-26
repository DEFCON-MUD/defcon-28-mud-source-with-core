inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 22, 1 }));
  set_short( "Hallway - x9y22z1" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y22z1.c",
  "south" : DIR+"/rooms/x9y21z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
