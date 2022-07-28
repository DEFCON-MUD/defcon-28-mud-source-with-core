inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 16, 4 }));
  set_short( "Corridor - x54y16z4" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y16z4.c",
  "east" : DIR+"/rooms/x55y16z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
