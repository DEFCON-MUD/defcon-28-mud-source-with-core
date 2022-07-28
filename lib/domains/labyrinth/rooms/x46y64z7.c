inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 64, 7 }));
  set_short( "Hallway - x46y64z7" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y64z7.c",
  "east" : DIR+"/rooms/x47y64z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
