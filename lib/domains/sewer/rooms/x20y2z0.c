inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 2, 0 }));
  set_short( "Corridor - x20y2z0" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y2z0.c",
  "east" : DIR+"/rooms/x21y2z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
