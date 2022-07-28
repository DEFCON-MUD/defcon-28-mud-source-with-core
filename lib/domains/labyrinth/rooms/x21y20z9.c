inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 20, 9 }));
  set_short( "Corridor - x21y20z9" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y20z9.c",
  "south" : DIR+"/rooms/x21y19z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
