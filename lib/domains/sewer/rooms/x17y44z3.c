inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 44, 3 }));
  set_short( "Passage - x17y44z3" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y44z3.c",
  "south" : DIR+"/rooms/x17y43z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
