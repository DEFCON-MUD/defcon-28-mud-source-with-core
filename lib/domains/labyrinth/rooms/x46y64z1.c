inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 64, 1 }));
  set_short( "Hallway - x46y64z1" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y64z1.c",
  "east" : DIR+"/rooms/x47y64z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
