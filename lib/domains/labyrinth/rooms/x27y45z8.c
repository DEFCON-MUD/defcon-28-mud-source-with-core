inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 45, 8 }));
  set_short( "Hallway - x27y45z8" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y46z8.c",
  "south" : DIR+"/rooms/x27y44z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
