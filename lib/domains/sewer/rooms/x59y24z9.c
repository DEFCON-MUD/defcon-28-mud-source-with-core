inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 24, 9 }));
  set_short( "Corridor - x59y24z9" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y24z9.c",
  "east" : DIR+"/rooms/x60y24z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
