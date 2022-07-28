inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 34, 6 }));
  set_short( "Hallway - x38y34z6" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y34z6.c",
  "east" : DIR+"/rooms/x39y34z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
