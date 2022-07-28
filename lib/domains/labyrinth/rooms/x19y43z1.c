inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 43, 1 }));
  set_short( "Hallway - x19y43z1" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y44z1.c",
  "south" : DIR+"/rooms/x19y42z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
