inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 2, 5 }));
  set_short( "Passage - x14y2z5" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y2z5.c",
  "east" : DIR+"/rooms/x15y2z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
