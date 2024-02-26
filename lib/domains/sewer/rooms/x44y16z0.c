inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 16, 0 }));
  set_short( "Passage - x44y16z0" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y16z0.c",
  "east" : DIR+"/rooms/x45y16z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
