inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 38, 2 }));
  set_short( "Passage - x12y38z2" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y38z2.c",
  "east" : DIR+"/rooms/x13y38z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
