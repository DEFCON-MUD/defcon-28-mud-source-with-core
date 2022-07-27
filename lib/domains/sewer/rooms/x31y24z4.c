inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 24, 4 }));
  set_short( "Passage - x31y24z4" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y24z4.c",
  "south" : DIR+"/rooms/x31y23z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
