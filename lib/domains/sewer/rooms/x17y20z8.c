inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 20, 8 }));
  set_short( "Hallway - x17y20z8" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y20z8.c",
  "south" : DIR+"/rooms/x17y19z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
