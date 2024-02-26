inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 6, 2 }));
  set_short( "Hallway - x17y6z2" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y6z2.c",
  "north" : DIR+"/rooms/x17y7z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
