inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 50, 6 }));
  set_short( "Corridor - x39y50z6" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y50z6.c",
  "north" : DIR+"/rooms/x39y51z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
