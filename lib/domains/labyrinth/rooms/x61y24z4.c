inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 24, 4 }));
  set_short( "Hallway - x61y24z4" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y25z4.c",
  "south" : DIR+"/rooms/x61y23z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
