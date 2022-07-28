inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 23, 4 }));
  set_short( "Corridor - x61y23z4" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y24z4.c",
  "south" : DIR+"/rooms/x61y22z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
