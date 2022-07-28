inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 43, 1 }));
  set_short( "Hallway - x9y43z1" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y44z1.c",
  "south" : DIR+"/rooms/x9y42z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
