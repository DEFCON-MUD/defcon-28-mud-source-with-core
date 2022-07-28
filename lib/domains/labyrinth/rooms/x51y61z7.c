inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 61, 7 }));
  set_short( "Hallway - x51y61z7" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y62z7.c",
  "south" : DIR+"/rooms/x51y60z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
