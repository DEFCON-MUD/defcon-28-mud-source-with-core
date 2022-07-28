inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 48, 3 }));
  set_short( "Corridor - x25y48z3" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y48z3.c",
  "south" : DIR+"/rooms/x25y47z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
