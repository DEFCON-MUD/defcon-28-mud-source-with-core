inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 34, 1 }));
  set_short( "Passage - x37y34z1" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y35z1.c",
  "south" : DIR+"/rooms/x37y33z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
