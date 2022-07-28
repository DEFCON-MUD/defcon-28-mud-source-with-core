inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 24, 4 }));
  set_short( "Passage - x36y24z4" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y24z4.c",
  "east" : DIR+"/rooms/x37y24z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
