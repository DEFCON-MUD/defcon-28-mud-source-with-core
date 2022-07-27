inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 50, 9 }));
  set_short( "Hallway - x14y50z9" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y50z9.c",
  "east" : DIR+"/rooms/x15y50z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
