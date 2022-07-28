inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 59, 1 }));
  set_short( "Passage - x51y59z1" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y60z1.c",
  "south" : DIR+"/rooms/x51y58z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
