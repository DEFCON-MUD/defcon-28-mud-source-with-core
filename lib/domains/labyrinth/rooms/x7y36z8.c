inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 36, 8 }));
  set_short( "Passage - x7y36z8" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y36z8.c",
  "east" : DIR+"/rooms/x8y36z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
