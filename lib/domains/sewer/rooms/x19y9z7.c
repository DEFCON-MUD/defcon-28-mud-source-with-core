inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 9, 7 }));
  set_short( "Corridor - x19y9z7" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y10z7.c",
  "south" : DIR+"/rooms/x19y8z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
