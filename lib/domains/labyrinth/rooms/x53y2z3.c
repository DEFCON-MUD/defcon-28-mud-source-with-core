inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 2, 3 }));
  set_short( "Passage - x53y2z3" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y2z3.c",
  "east" : DIR+"/rooms/x54y2z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
