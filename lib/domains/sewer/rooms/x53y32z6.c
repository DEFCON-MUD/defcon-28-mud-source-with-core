inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 32, 6 }));
  set_short( "Hallway - x53y32z6" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y32z6.c",
  "east" : DIR+"/rooms/x54y32z6.c",
  "north" : DIR+"/rooms/x53y33z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
