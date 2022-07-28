inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 62, 2 }));
  set_short( "Hallway - x45y62z2" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y62z2.c",
  "east" : DIR+"/rooms/x46y62z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
