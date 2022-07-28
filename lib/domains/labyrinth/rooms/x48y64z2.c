inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 64, 2 }));
  set_short( "Hallway - x48y64z2" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y64z2.c",
  "east" : DIR+"/rooms/x49y64z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
