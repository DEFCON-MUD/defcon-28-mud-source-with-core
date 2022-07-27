inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 45, 0 }));
  set_short( "Hallway - x49y45z0" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y46z0.c",
  "south" : DIR+"/rooms/x49y44z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
