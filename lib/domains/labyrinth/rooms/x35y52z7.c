inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 52, 7 }));
  set_short( "Passage - x35y52z7" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y52z7.c",
  "north" : DIR+"/rooms/x35y53z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
