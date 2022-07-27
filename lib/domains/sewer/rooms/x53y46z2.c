inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 46, 2 }));
  set_short( "Corridor - x53y46z2" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "south" : DIR+"/rooms/x53y45z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
