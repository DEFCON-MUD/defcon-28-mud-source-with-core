inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 0, 1 }));
  set_short( "Hallway - x18y0z1" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y0z1.c",
  "east" : DIR+"/rooms/x19y0z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
