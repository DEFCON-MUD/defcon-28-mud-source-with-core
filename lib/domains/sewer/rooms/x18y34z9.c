inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 34, 9 }));
  set_short( "Corridor - x18y34z9" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y34z9.c",
  "east" : DIR+"/rooms/x19y34z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
