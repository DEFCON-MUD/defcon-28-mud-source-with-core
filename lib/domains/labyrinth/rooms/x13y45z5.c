inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 45, 5 }));
  set_short( "Corridor - x13y45z5" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y46z5.c",
  "south" : DIR+"/rooms/x13y44z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
