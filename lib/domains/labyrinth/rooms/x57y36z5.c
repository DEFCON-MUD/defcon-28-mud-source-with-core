inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 36, 5 }));
  set_short( "Hallway - x57y36z5" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y36z5.c",
  "east" : DIR+"/rooms/x58y36z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
