inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 46, 4 }));
  set_short( "Passage - x15y46z4" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y46z4.c",
  "south" : DIR+"/rooms/x15y45z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
