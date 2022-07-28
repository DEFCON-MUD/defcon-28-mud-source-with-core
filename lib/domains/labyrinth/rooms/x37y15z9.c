inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 15, 9 }));
  set_short( "Hallway - x37y15z9" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y16z9.c",
  "south" : DIR+"/rooms/x37y14z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
