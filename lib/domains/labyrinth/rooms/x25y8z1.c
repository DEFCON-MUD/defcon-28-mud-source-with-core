inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 8, 1 }));
  set_short( "Corridor - x25y8z1" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y9z1.c",
  "south" : DIR+"/rooms/x25y7z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
