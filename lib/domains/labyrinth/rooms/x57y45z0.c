inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 45, 0 }));
  set_short( "Hallway - x57y45z0" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y46z0.c",
  "south" : DIR+"/rooms/x57y44z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
