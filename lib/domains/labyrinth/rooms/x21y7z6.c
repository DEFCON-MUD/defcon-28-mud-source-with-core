inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 7, 6 }));
  set_short( "Corridor - x21y7z6" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y8z6.c",
  "south" : DIR+"/rooms/x21y6z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
