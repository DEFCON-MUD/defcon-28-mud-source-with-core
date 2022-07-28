inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 36, 4 }));
  set_short( "Passage - x51y36z4" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y37z4.c",
  "south" : DIR+"/rooms/x51y35z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
