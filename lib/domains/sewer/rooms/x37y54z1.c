inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 54, 1 }));
  set_short( "Corridor - x37y54z1" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y54z1.c",
  "south" : DIR+"/rooms/x37y53z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
