inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 16, 5 }));
  set_short( "Corridor - x39y16z5" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y16z5.c",
  "north" : DIR+"/rooms/x39y17z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
