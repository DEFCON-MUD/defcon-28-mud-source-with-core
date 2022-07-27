inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 44, 7 }));
  set_short( "Passage - x52y44z7" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y44z7.c",
  "east" : DIR+"/rooms/x53y44z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
