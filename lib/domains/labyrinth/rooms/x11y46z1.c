inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 46, 1 }));
  set_short( "Passage - x11y46z1" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y46z1.c",
  "north" : DIR+"/rooms/x11y47z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
