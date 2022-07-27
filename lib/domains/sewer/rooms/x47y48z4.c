inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 48, 4 }));
  set_short( "Corridor - x47y48z4" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y48z4.c",
  "north" : DIR+"/rooms/x47y49z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
