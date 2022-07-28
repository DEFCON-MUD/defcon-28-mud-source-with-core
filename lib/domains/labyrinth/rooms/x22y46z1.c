inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 46, 1 }));
  set_short( "Hallway - x22y46z1" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y46z1.c",
  "east" : DIR+"/rooms/x23y46z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
