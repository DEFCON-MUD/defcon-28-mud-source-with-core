inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 44, 7 }));
  set_short( "Corridor - x5y44z7" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y45z7.c",
  "south" : DIR+"/rooms/x5y43z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
