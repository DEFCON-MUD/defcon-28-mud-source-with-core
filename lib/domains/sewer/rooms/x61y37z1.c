inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 37, 1 }));
  set_short( "Hallway - x61y37z1" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y38z1.c",
  "south" : DIR+"/rooms/x61y36z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
