inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 7, 2 }));
  set_short( "Hallway - x45y7z2" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y8z2.c",
  "south" : DIR+"/rooms/x45y6z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
