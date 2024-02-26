inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 45, 4 }));
  set_short( "Passage - x41y45z4" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y46z4.c",
  "south" : DIR+"/rooms/x41y44z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
