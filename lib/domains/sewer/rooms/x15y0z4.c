inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 0, 4 }));
  set_short( "Hallway - x15y0z4" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y0z4.c",
  "east" : DIR+"/rooms/x16y0z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
