inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 24, 6 }));
  set_short( "Corridor - x7y24z6" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y24z6.c",
  "north" : DIR+"/rooms/x7y25z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
