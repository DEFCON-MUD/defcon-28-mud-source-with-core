inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 35, 5 }));
  set_short( "Corridor - x37y35z5" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y36z5.c",
  "south" : DIR+"/rooms/x37y34z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
