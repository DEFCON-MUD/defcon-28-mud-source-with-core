inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 60, 1 }));
  set_short( "Corridor - x42y60z1" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y60z1.c",
  "east" : DIR+"/rooms/x43y60z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
