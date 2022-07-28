inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 40, 0 }));
  set_short( "Hallway - x16y40z0" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y40z0.c",
  "east" : DIR+"/rooms/x17y40z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
