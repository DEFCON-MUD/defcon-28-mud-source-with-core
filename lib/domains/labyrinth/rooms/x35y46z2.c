inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 46, 2 }));
  set_short( "Corridor - x35y46z2" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y46z2.c",
  "south" : DIR+"/rooms/x35y45z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
