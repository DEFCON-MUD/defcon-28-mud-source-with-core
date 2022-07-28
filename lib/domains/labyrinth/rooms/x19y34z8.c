inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 34, 8 }));
  set_short( "Corridor - x19y34z8" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y35z8.c",
  "south" : DIR+"/rooms/x19y33z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
