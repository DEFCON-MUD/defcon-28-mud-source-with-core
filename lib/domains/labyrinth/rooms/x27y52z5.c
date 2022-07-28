inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 52, 5 }));
  set_short( "Corridor - x27y52z5" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y53z5.c",
  "south" : DIR+"/rooms/x27y51z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
