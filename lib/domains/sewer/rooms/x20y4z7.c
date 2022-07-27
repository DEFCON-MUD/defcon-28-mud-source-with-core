inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 4, 7 }));
  set_short( "Corridor - x20y4z7" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y4z7.c",
  "east" : DIR+"/rooms/x21y4z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
