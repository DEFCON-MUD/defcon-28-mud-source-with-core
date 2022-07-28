inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 38, 2 }));
  set_short( "Corridor - x46y38z2" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y38z2.c",
  "east" : DIR+"/rooms/x47y38z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
