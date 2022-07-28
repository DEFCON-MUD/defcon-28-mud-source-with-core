inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 18, 8 }));
  set_short( "Hallway - x37y18z8" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y18z8.c",
  "north" : DIR+"/rooms/x37y19z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
