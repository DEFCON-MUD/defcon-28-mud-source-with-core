inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 30, 3 }));
  set_short( "Corridor - x18y30z3" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y30z3.c",
  "east" : DIR+"/rooms/x19y30z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
