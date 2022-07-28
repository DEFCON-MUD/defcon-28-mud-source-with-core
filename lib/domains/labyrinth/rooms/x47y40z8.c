inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 40, 8 }));
  set_short( "Corridor - x47y40z8" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y40z8.c",
  "east" : DIR+"/rooms/x48y40z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
