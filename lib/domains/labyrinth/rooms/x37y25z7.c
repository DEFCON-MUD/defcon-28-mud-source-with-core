inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 25, 7 }));
  set_short( "Corridor - x37y25z7" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y26z7.c",
  "south" : DIR+"/rooms/x37y24z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
