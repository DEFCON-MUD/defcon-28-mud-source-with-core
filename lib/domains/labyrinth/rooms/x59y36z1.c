inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 36, 1 }));
  set_short( "Passage - x59y36z1" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y36z1.c",
  "east" : DIR+"/rooms/x60y36z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
