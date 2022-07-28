inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 0, 4 }));
  set_short( "Hallway - x13y0z4" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y0z4.c",
  "east" : DIR+"/rooms/x14y0z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
