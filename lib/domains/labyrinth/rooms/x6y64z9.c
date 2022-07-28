inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 64, 9 }));
  set_short( "Corridor - x6y64z9" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y64z9.c",
  "east" : DIR+"/rooms/x7y64z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
