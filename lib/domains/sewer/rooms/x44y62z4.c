inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 62, 4 }));
  set_short( "Passage - x44y62z4" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y62z4.c",
  "east" : DIR+"/rooms/x45y62z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
