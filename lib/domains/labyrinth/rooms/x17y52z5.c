inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 52, 5 }));
  set_short( "Corridor - x17y52z5" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y52z5.c",
  "east" : DIR+"/rooms/x18y52z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
