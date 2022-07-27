inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 44, 8 }));
  set_short( "Passage - x57y44z8" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y45z8.c",
  "south" : DIR+"/rooms/x57y43z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
