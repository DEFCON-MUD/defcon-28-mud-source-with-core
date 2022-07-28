inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 44, 9 }));
  set_short( "Corridor - x21y44z9" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y44z9.c",
  "east" : DIR+"/rooms/x22y44z9.c",
  "south" : DIR+"/rooms/x21y43z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
