inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 44, 6 }));
  set_short( "Hallway - x16y44z6" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y44z6.c",
  "east" : DIR+"/rooms/x17y44z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
