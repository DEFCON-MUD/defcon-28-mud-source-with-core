inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 10, 9 }));
  set_short( "Hallway - x53y10z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y11z9.c",
  "south" : DIR+"/rooms/x53y9z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
