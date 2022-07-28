inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 49, 7 }));
  set_short( "Corridor - x43y49z7" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y50z7.c",
  "south" : DIR+"/rooms/x43y48z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
