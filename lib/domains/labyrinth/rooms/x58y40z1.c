inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 40, 1 }));
  set_short( "Corridor - x58y40z1" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y40z1.c",
  "east" : DIR+"/rooms/x59y40z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
