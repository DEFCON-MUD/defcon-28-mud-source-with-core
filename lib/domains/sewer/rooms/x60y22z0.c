inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 22, 0 }));
  set_short( "Corridor - x60y22z0" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y22z0.c",
  "east" : DIR+"/rooms/x61y22z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
