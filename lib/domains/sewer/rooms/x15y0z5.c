inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 0, 5 }));
  set_short( "Corridor - x15y0z5" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y0z5.c",
  "east" : DIR+"/rooms/x16y0z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
